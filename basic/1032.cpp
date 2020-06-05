#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,id,score;
	scanf("%d",&n);
	vector<int> a(n+1);
	for(int i=0;i<n;i++){
		cin>>id>>score;
		a[id]+=score;
	}
	int max=a[1],p=1;
	for(int i=1;i<=n;i++){
		if(a[i]>max){
			max=a[i];
			p=i;
		}
	}
	printf("%d %d\n",p,max);
	return 0;
}
