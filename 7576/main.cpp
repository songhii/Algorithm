//
//  main.cpp
//  7576
//
//  Created by songhee on 2021/02/12.
//

#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

int M, N, day = -1000, perfect = 1;
int dir_x[4] = {0, 0, -1, 1};
int dir_y[4] = {-1, 1, 0, 0};
int tomato[MAX][MAX];
int dist[MAX][MAX];
int visit[MAX][MAX];
queue<pair<int, int>> q;

void bfs(int x, int y)
{
    while(!q.empty())
    {
        int fx = q.front().first, fy = q.front().second;
        visit[fx][fy] = 1;
        q.pop();
        for(int dir = 0; dir < 4; dir++)
        {
            int dx = fx + dir_x[dir], dy = fy + dir_y[dir];
            if(dx < 0 || N <= dx || dy < 0 || M <= dy) continue;
            if(visit[dx][dy] == 0 && tomato[dx][dy] == 0)
            {
                tomato[dx][dy] = 1;
                visit[dx][dy] = 1;
                dist[dx][dy] = dist[fx][fy] + 1;
                q.push({dx, dy});
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &M, &N);
    for(int x = 0; x < N; x++)
    {
        for(int y = 0; y < M; y++)
        {
            scanf("%d", &tomato[x][y]);
            if(tomato[x][y] == -1) visit[x][y] = -1;
            else if(tomato[x][y] == 1)
            {
                q.push({x, y});
                dist[x][y] = 0;
            }
            else perfect = 0;
        }
    }
    
    if(perfect)
    {
        printf("0\n");
        return 0;
    }
    
    bfs(0, 0);
    
    for(int x = 0; x < N; x++)
    {
        for(int y = 0; y < M; y++)
        {
            if(dist[x][y] > day) day = dist[x][y];
            if(tomato[x][y] == 0)
            {
                printf("-1\n");
                return 0;
            }
        }
    }
    
    printf("%d\n", day);
    return 0;
}
