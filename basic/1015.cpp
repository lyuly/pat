#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int number; //学号
    int dmark;  //德分
    int cmark;  //才分
};

bool cmp(node x,node y){
    if((x.dmark+x.cmark)!=(y.dmark+y.cmark)) //总分不同
        return (x.cmark+x.dmark)>(y.cmark+y.dmark);
    else if(x.dmark!=y.dmark) //总分相同但德分不同
        return x.dmark>y.dmark;
    else
        return x.number<y.number; //总分德分都相同
}

int main()
{
    int n,l,h;
    scanf("%d %d %d",&n,&l,&h);
    vector<node> v[4];
    node t;
    int count=n;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&t.number,&t.dmark,&t.cmark);
        if(t.dmark<l||t.cmark<l) //不及格人数减
            count--;
        else if(t.dmark>=h&&t.cmark>=h) //第一类
            v[0].push_back(t);
        else if(t.dmark>=h&&t.cmark<h) //第二类
            v[1].push_back(t);
        else if(t.dmark<h&&t.cmark<h&&t.dmark>=t.cmark) //第三类
            v[2].push_back(t);
        else
            v[3].push_back(t); //第四类 
    }
    printf("%d\n",count); //总共及格的人数
    for(int i=0;i<4;i++){
        sort(v[i].begin(),v[i].end(),cmp); //按要求排序
        for(int j=0;j<v[i].size();j++)
            printf("%d %d %d\n",v[i][j].number,v[i][j].dmark,v[i][j].cmark);
    }
    return 0;
}