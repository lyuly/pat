#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

const int maxn = 1010;
struct node{
    int id,layer; //结点编号，结点层数
};

vector<node> adj[maxn];
bool inq[maxn] = {false};

int BFS(int s,int L){
    node u;
    queue<node> q;
    u.id = s;
    u.layer = 0;
    q.push(u);
    inq[u.id] = true;
    int c = 0; //记录转发层数
    while(!q.empty()){
        node topnode = q.front(); //取队首顶点
        q.pop(); //队首结点出队
        int id = topnode.id; //取队首结点的编号
        for(int i = 0; i < adj[id].size(); i++){
            node next = adj[id][i];
            next.layer = topnode.layer + 1; //next的层号等于当前层号加1
            if(inq[next.id] == false && next.layer <= L){
                q.push(next); //next入队
                inq[next.id] = true; //设置next的编号已被访问
                c++; //转发数加1
            }
        }
    }
    return c;
}

int main()
{
    node user;
    int n,L,userfollow,idfollow;
    scanf("%d%d",&n,&L); //结点个数，层数上限
    for(int i=1; i<=n; i++){
        user.id = i;
        scanf("%d",&userfollow); //关注用户人数
        for(int j=0; j<userfollow;j++){
            scanf("%d",&idfollow);
            adj[idfollow].push_back(user);
        }
    }
    int q,s;
    scanf("%d",&q); //输入查询个数
    for(int i=0;i<q;i++){
        memset(inq,false,sizeof(inq));
        scanf("%d",&s); //起始结点编号
        int numForward = BFS(s,L);
        printf("%d\n",numForward);
    }
    return 0;
}