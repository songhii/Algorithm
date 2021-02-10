//
//  main.cpp
//  2606_BFS
//
//  Created by songhee on 2021/02/10.
//

#include <iostream>
#include <vector>
#include <queue>
#define MAX 100+1
using namespace std;

vector<int> g[MAX];
queue<int> q;
int visit[MAX];
int V, E, comp = 0;

void bfs(int s)
{
    visit[s] = 1;
    q.push(s);
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        for(int i = 0; i < g[front].size(); i++)
        {
            int node = g[front].at(i);
            if(!visit[node])
            {
                visit[node] = 1;
                comp++;
                q.push(node);
            }
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
    bfs(1);
    printf("%d\n", comp);
    return 0;
}
