#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 110;

vector<int> G[maxn]; // 存放树
int leaf[maxn] = {0}; // 每层叶子结点个数
int max_h = -1; // 树的深度

void DFS(int index, int h){
    if(G[index].size() == 0){
        leaf[h]++;
        max_h = max(h, max_h);
        return;
    }
    for(int i = 0; i < G[index].size(); i++)
        DFS(G[index][i], h + 1);
}

int main(){
    int n, m, parent, k, child;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < m; i++){
        scanf("%d%d",&parent,&k);
        for(int j = 0; j < k; j++){
            scanf("%d",&child);
            G[parent].push_back(child);
        }
    }
    DFS(1,0);
    printf("%d",leaf[0]);
    for(int i = 1; i <= max_h; i++)
        printf(" %d",leaf[i]);
    return 0;
}