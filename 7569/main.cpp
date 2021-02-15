//
//  main.cpp
//  7569
//
//  Created by songhee on 2021/02/15.
//

#include <iostream>
#include <tuple>
#include <queue>
#define MAX 100
using namespace std;

int M, N, H, day = -1000, perfect = 1;
int dir_z[6] = {-1, 1, 0, 0, 0, 0};
int dir_x[6] = {0, 0, -1, 1, 0, 0};
int dir_y[6] = {0, 0, 0, 0, -1, 1};
int tomato[MAX][MAX][MAX];
int dist[MAX][MAX][MAX];
int visit[MAX][MAX][MAX];
queue<tuple<int, int, int>> q;

void bfs(int z, int x, int y)
{
    while(!q.empty())
    {
        int fz = get<0>(q.front()), fx = get<1>(q.front()), fy = get<2>(q.front());
        visit[fz][fx][fy] = 1;
        q.pop();
        for(int dir = 0; dir < 6; dir++)
        {
            int dz = fz + dir_z[dir], dx = fx + dir_x[dir], dy = fy + dir_y[dir];
            if(dz < 0 || H <= dz || dx < 0 || N <= dx || dy < 0 || M <= dy) continue;
            if(visit[dz][dx][dy] == 0 && tomato[dz][dx][dy] == 0)
            {
                tomato[dz][dx][dy] = 1;
                visit[dz][dx][dy] = 1;
                dist[dz][dx][dy] = dist[fz][fx][fy] + 1;
                q.push({dz, dx, dy});
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d %d", &M, &N, &H);
    for(int z = 0 ; z < H; z++)
    {
        for(int x = 0; x < N; x++)
        {
            for(int y = 0; y < M; y++)
            {
                scanf("%d", &tomato[z][x][y]);
                if(tomato[z][x][y] == -1) visit[z][x][y] = -1;
                else if(tomato[z][x][y] == 1) q.push({z, x, y});
                else perfect = 0;
            }
        }
    }


    if(perfect)
    {
        printf("0\n");
        return 0;
    }

    bfs(0, 0, 0);

    for(int z = 0 ; z < H; z++)
    {
        for(int x = 0; x < N; x++)
        {
            for(int y = 0; y < M; y++)
            {
                if(dist[z][x][y] > day) day = dist[z][x][y];
                if(tomato[z][x][y] == 0)
                {
                    printf("-1\n");
                    return 0;
                }
            }
        }
    }

    printf("%d\n", day);
    return 0;
}
