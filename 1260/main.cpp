//
//  main.cpp
//  1260
//
//  Created by songhee on 2021/02/09.
//

#include <iostream>
#include <queue>
#define MAX 1000+1
using namespace std;

int N, M, V;
int v[MAX];
int g[MAX][MAX];
queue<int> q;

void dfs(int n)
{
    printf("%d ", n);
    if(v[n]) return;
    v[n] = 1;
    for(int i = 1; i <= N; i++)
    {
        if(!v[i] && g[n][i])
            dfs(i);
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
        for(int i = 1; i <= N; i++)
        {
            if(!v[i] && g[n][i])
            {
                v[i] = 1;
                q.push(i);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d %d", &N, &M, &V);
    for(int i = 0; i < M; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        g[x][y] = g[y][x] = 1;
    }
    dfs(V);
    printf("\n");
    
    fill_n(v, MAX, 0);
    bfs(V);
    printf("\n");
    return 0;
}
