#include <iostream>
using namespace std;

const int maxn = 1000; // 最大顶点数
const int INF = 0x3fffffff;

int N, M, C1, C2, G[maxn][maxn], weight[maxn]; // 城市总量，路径总数，所在城市，救援城市
int d[maxn], w[maxn], num[maxn];
bool visited[maxn] = {false}; // 访问数组

void Dijkstra(int s) {
    fill(d, d + maxn, INF);
    fill(w, w + maxn, INF);
    fill(num, num + maxn, INF);
    d[s] = 0;
    w[s] = weight[s];
    num[s] = 1;
    for(int i = 0; i < N; i++){
        int u = -1, min = INF;
        for(int j = 0; j < N; j++){
            if(visited[j] == false && d[j] < min){
                u = j;
                min = d[j];
            }
        }
        if( u == -1) return;
        visited[u] = true;
        for( int v = 0; v < N; v++){
            if(visited[v] == false && G[u][v] != INF){
                if(d[u] + G[u][v] < d[v]){
                    d[v] = d[u] + G[u][v];
                    w[v] = w[u] + weight[v];
                    num[v] = num[u];
                }
                else if(d[u] + G[u][v] == d[v]){
                    if(w[u] + weight[v] > w[v]){
                        w[v] = w[u] + weight[v];
                    }
                    num[v] += num[u];   
                }             
            }
        }
    }
}

int main()
{
    scanf("%d%d%d%d",&N, &M, &C1, &C2);
    int c1,c2;
    for(int i = 0; i < N; i++)
        scanf("%d", &weight[i]);
    fill(G[0], G[0] + maxn * maxn, INF);
    for(int i = 0; i < M; i++){
        scanf("%d%d", &c1, &c2);
        scanf("%d",&G[c1][c2]);
        G[c2][c1] = G[c1][c2];
    }
    Dijkstra(C1);
    printf("%d %d\n",num[C2],w[C2]);
    return 0;
}