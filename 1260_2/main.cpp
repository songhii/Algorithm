//
//  main.cpp
//  1260_2
//
//  Created by songhee on 2021/02/09.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1000+1
using namespace std;

int N, M, V;
int v[MAX];
vector<int> g[MAX];
queue<int> q;

void dfs(int n)
{
    printf("%d ", n);
    v[n] = 1;
    for(int i = 0; i < g[n].size(); i++)
    {
        int next = g[n].at(i);
        if(!v[next]) dfs(next);
    }
}

void bfs(int n)
{
    q.push(n);
    v[n] = 1;
    while(!q.empty())
    {
        n = q.front();
        q.pop();
        printf("%d ", n);
        for(int i = 0; i < g[n].size(); i++)
        {
            int next = g[n].at(i);
            if(!v[next])
            {
                v[next] = 1;
                q.push(next);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d %d", &N, &M, &V);
    for(int i = 0; i < M; i++)
    {
        int x, y; scanf("%d %d", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }
    for(int i = 1; i <= N; i++) sort(g[i].begin(), g[i].end());
    dfs(V);
    printf("\n");
    fill_n(v, MAX, 0);
    bfs(V);
    printf("\n");
    return 0;
}
