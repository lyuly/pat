#include <iostream>
using namespace std;

const int maxn = 1001;

int  main()
{
    int k,n,m,t;
    double num[maxn]={0},p;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%lf",&t,&p);
        num[t]+=p;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d%lf",&t,&p);
        num[t]+=p;
    }
    int count=0; //计算项数
    for(int i=0;i<maxn;i++){
        if(num[i]!=0)
            count++;
    }
    printf("%d",count);
    for(int i=1000;i>=0;i--){ //从高位到地位打印
        if(num[i]!=0)
            printf(" %d %.1f",i,num[i]);
    }
    return 0;
}