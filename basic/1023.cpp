#include <iostream>
using namespace std;

int main()
{
    int a[10],t=0; //数组a保存0-9的个数
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int i=1;i<10;i++){ //首先寻找最低位,不能为0
        if(a[i]!=0){
            cout<<i;
            t=i;
            break;
        }
    }
    for(int i=0;i<a[0];i++) cout<<0; //打印0
    for(int i=0;i<a[t]-1;i++) cout<<t; //打印剩余的除0的最低数
    for(int i=t+1;i<10;i++)
        for(int k=0;k<a[i];k++)
            cout<<i;
    return 0;
}