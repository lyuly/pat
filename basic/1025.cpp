#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=100010;

struct Node{
    int address,data,next;
    int order;
}list[maxn];

bool cmp(Node a,Node b){
    return a.order<b.order;
}

int main()
{
    int first,n,k,address;
    scanf("%d %d %d",&first,&n,&k);
    for(int i=0;i<maxn;i++) //初始化list
        list[i].order=maxn;
    for(int i=0;i<n;i++){
        scanf("%d",&address);
        scanf("%d %d",&list[address].data,&list[address].next);
        list[address].address=address;
    }
    int p=first,count=0; //count记录有效结点个数
    while(p!=-1){
        list[p].order=count++;
        p=list[p].next;
    }
    sort(list,list+maxn,cmp); //以order进行从小到大排序
    n=count;
    for(int i=0;i<n-(n%k);i+=k)
        reverse(begin(list)+i,begin(list)+i+k);
    for(int i=0;i<n-1;i++)
        printf("%05d %d %05d\n",list[i].address,list[i].data,list[i+1].address);
    printf("%05d %d -1\n",list[n-1].address,list[n-1].data);
    return 0;
}
