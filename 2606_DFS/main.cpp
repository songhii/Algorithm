//
//  main.cpp
//  2606_DFS
//
//  Created by songhee on 2021/02/10.
//

#include <iostream>
#include <vector>
#define MAX 100+1
using namespace std;

vector<int> g[MAX];
int visit[MAX];
int V, E, comp = 0;

void dfs(int s)
{
    if(visit[s]) return;
    visit[s] = 1;
    for(int i = 0; i < g[s].size(); i++)
    {
        int node = g[s].at(i);
        if(!visit[node])
        {
            comp++;
            dfs(node);
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &V); scanf("%d", &E);
    for(int i = 0; i < E; i++)
    {
        int x, y; scanf("%d %d", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }
    dfs(1);
    printf("%d\n", comp);
    return 0;
}
