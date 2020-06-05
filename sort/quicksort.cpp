// #include <iostream>
// #include <vector>
// using namespace std;

// int partition(vector<int>& a,int lo,int hi){
// 	int i = lo;
// 	int j = hi + 1;
// 	int t = a[lo];
// 	while(true){
// 		while(a[++i]<t)
// 			if(i == hi)
// 				break;
// 		while(t<a[--j])
// 			if(j == lo)
// 				break;
// 		if(i >= j)
// 			break;
// 		int temp = a[i];
// 		a[i] = a[j];
// 		a[j] = temp;
// 	}
// 	int temp = a[lo];
// 	a[lo] = a[j];
// 	a[j] = temp;
// 	return j;
// }

// int quicksort(vector<int>& a,int k){
// 	int lo = 0,hi = a.size() - 1;
// 	while(hi > lo){
// 		int i = partition(a, lo, hi);
// 		if(i>k) hi = i - 1;
// 		else if(i<k) lo = i + 1;
// 		else return a[i];
// 	}
// 	return a[lo];
// }

// // 打印
// void print(vector<int>& a) {
// 	for (auto it = a.begin(); it != a.end(); it++)
// 		cout << *it << " ";
// 	cout << endl;
// }

// int main()
// {
// 	vector<int> a;
// 	int x;
// 	for (int i = 0; i < 10; i++) {
// 		cin >> x;
// 		a.push_back(x);
// 	}
// 	printf("排序前数组为: \n");
// 	print(a);
// 	for(int i=0;i<a.size();i++)
// 		quicksort(a, i);
// 	printf("排序后数组为: \n");
// 	print(a);
// 	return 0;
// }

#include <iostream>
using namespace std;

int partition(int *a,int lo,int hi){
	int t=a[lo];
	while(lo<hi){
		while(lo<hi&&a[hi]>=t) --hi;
		a[lo]=a[hi];
		while(lo<hi&&a[lo]<=t) ++lo;
		a[hi]=a[lo];
	}
	a[lo]=t;
	return lo;
}

void quicksort(int *a,int lo,int hi){
	if(lo<hi){
		int i=partition(a,lo,hi);
		quicksort(a,lo,i-1);
		quicksort(a,i+1,hi);
	}
}

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,10);
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}