//
//  main.cpp
//  1707_DFS
//
//  Created by songhee on 2021/02/18.
//

#include <iostream>
#include <vector>
#define MAX 20000+1
using namespace std;

int K, V, E;
int visit[MAX];
vector<int> graph[MAX];

bool isBipartite()
{
    for(int i = 1; i <= V; i++)
        for(int j = 0; j < graph[i].size(); j++)
            if(visit[i] == visit[graph[i].at(j)]) return false;
    return true;
}

void dfs(int v, int color)
{
    visit[v] = color;
    for(int idx = 0; idx < graph[v].size(); idx++)
    {
        int node = graph[v].at(idx);
        if(visit[node] != 0) continue;
        if(color > 0)
        {
            visit[node] = -1;
            dfs(node, -1);
        }
        else
        {
            visit[node] = 1;
            dfs(node, 1);
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &K);
    for(int test = 0; test < K; test++)
    {
        scanf("%d %d", &V, &E);
        for(int edge = 0; edge < E; edge++)
        {
            int v1, v2; scanf("%d %d", &v1, &v2);
            graph[v1].push_back(v2); graph[v2].push_back(v1);
        }
        for(int v = 1; v <= V; v++)
        {
            if(visit[v] == 0) dfs(v, 1);
        }
        if(isBipartite()) printf("YES\n");
        else printf("NO\n");
        fill_n(visit, MAX, 0);
        for(int i = 1; i <= V; i++) graph[i].clear();
    }
    return 0;
}
