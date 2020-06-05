//贪心
#include <iostream>
#include <algorithm>
using namespace std;

struct cake{
    double price; //每个月饼单价
    double store; //月饼库存
    double sell; //月饼总价值
}c[1010];

bool cmp(cake a,cake b){
    return a.price>b.price;
}

int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
        cin>>c[i].store;
    for(int i=0;i<n;i++)
        cin>>c[i].sell;
    for(int i=0;i<n;i++)
        c[i].price=c[i].sell/c[i].store;
    sort(c,c+n,cmp); //按价格排序
    double sum=0;
    for(int i=0;i<n;i++){
        if(c[i].store<=d){ //当前需求量大于该月饼库存量
            d-=c[i].store;
            sum+=c[i].sell;
        }
        else
        {
            sum+=c[i].price*d;
            break;
        }
    }
    printf("%.2f\n",sum);
    return 0;
}