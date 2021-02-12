//
//  main.cpp
//  1012_BFS
//
//  Created by songhee on 2021/02/12.
//

#include <iostream>
#include <vector>
#include <queue>
#define MAX 50
using namespace std;

int T, M, N, K;
int field[MAX][MAX];
int dir_x[4] = {-1, 1, 0, 0};
int dir_y[4] = {0, 0, -1, 1};
queue<pair<int, int>> q;

void bfs(int y, int x)
{
    q.push({y, x});
    field[y][x] = 0;
    while(!q.empty())
    {
        int fy = q.front().first, fx = q.front().second;
        q.pop();
        for(int dir = 0; dir < 4; dir++)
        {
            int dy = dir_y[dir] + fy, dx = dir_x[dir] + fx;
            if(dy < 0 || N <= dy || dx < 0 || M <= dx) continue;
            if(field[dy][dx])
            {
                q.push({dy, dx});
                field[dy][dx] = 0;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        int worm = 0;
        scanf("%d %d %d", &M, &N, &K);
        for(int cab = 0; cab < K; cab++)
        {
            int x, y; scanf("%d %d", &x, &y);
            field[y][x] = 1;
        }
        for(int y = 0; y < N; y++)
        {
            for(int x = 0; x < M; x++)
            {
                if(field[y][x])
                {
                    worm++;
                    bfs(y, x);
                }
            }
        }
        printf("%d\n", worm);
    }
    return 0;
}
