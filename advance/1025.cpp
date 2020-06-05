#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
	int loc, loc_rank, rank, score;
	long long int num;
};

bool cmp(node a, node b) {
	return (a.score != b.score) ? (a.score > b.score) : (a.num < b.num);
}

int main()
{
	int n, k;
	scanf("%d", &n); //输入考场数
	vector<node> v;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k); //输入每个考场的人数
		vector<node> a(k);
		for (int j = 0; j < k; j++) {
			cin >> a[j].num >> a[j].score;
			a[j].loc = i;
		}
		sort(a.begin(), a.end(), cmp); //当前考场进行排序
		a[0].loc_rank = 1; //当前考场内的排名
		for (int j = 1; j < k; j++) {
			if (a[j].score == a[j - 1].score)
				a[j].loc_rank = a[j - 1].loc_rank;
			else
				a[j].loc_rank = j + 1;
		}
		for (int j = 0; j < k; j++) //将当前考场排名后的数据放入v中
			v.push_back(a[j]);
	}
	sort(v.begin(), v.end(), cmp); //对所有的学生按成绩进行排序
	v[0].rank = 1;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].score == v[i - 1].score)
			v[i].rank = v[i - 1].rank;
		else
			v[i].rank = i + 1;
	}
    cout<<v.size()<<endl; //输入学生总人数
	for (int i = 0; i < v.size(); i++)
		printf("%lld %d %d %d\n", v[i].num, v[i].rank, v[i].loc, v[i].loc_rank);
	return 0;
}