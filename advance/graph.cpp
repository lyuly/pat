#include <iostream>
#include <vector>
using namespace std;

const int maxn = 1000;
const int INF = 0x3fffffff;

struct node {
    int v,dis; // v为边的目标顶点，dis为边权
};

vector<node> adj[maxn]; // 图G，adj[u]存放从顶点u出发可以到达的所有顶点
int n, m, s; // n为顶点数，m为边数，s为起始结点
int d[maxn]; // 起点到达各点的最短路径长度
bool visited[maxn] = {false}; // 标记数组，visited[i]==true表示已被访问。初值均为false
int pre[maxn]; // pre[v]表示从起点到顶点v的最短路径上v的一个顶点

void Dijkstra(int s) { // s为起点
    fill(d, d + maxn, INF); // fill函数将整个d数组赋为INF，功能等同于memset
    d[s] = 0; // 起点s到达自身的距离为0
    for(int i = 0; i < n; i++) { // 循环n次
        int u = -1, min = INF; // u使d[u]最小，min存放最小的d[u]
        for(int j = 0; j < n; j++) {
            if(visited[j] == false && d[j] < min) {
                u = j;
                min = d[j];
            }
        }
        // 找不到小于INF的d[u]，说明剩下的顶点和起点s不连通
        if(u == -1) return;
        visited[u] = true; // 标记u为已访问
        for(int j = 0; j < adj[u].size(); j++){
            int v = adj[u][j].v; // 通过邻接表直接获得u能到达的顶点v
            if(visited[v] == false && d[u] + adj[u][j].dis < d[v]) {
                // 如果v未访问&&以u为中介点可以使d[v]更优
                d[v] = d[u] + adj[u][j].dis; // 优化d[v]
                pre[v] = u; // 记录v的前去顶点是u
            }
        }
    }
}

void DFS(int s, int v){
    if(v == s){
        printf("%d\n",s);
        return;
    }
    DFS(s,pre[v]);
    printf("%d\n",v);
}

int main()
{
    node u;
    int v, w,first,last,L;
    scanf("%d%d%d", &n, &m, &s); // 顶点个数、边数、起点编号
    for(int i=0; i<m; i++){
        scanf("%d%d%d",&first,&last,&L);
        u.v = last;
        u.dis = L;
        adj[first].push_back(u);
    }
    Dijkstra(s);
    for(int i=0; i < n; i++){
        printf("%d ",d[i]);
    }
    DFS(s, 5);
    return 0;
}