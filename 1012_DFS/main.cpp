//
//  main.cpp
//  1012_DFS
//
//  Created by songhee on 2021/02/12.
//

#include <iostream>
#define MAX 50

int T, M, N, K;
int field[MAX][MAX];
int dir_x[4] = {-1, 1, 0, 0};
int dir_y[4] = {0, 0, -1, 1};

void dfs(int y, int x)
{
    if(!field[y][x]) return;
    field[y][x] = 0;
    for(int dir = 0; dir < 4; dir++)
    {
        int dy = dir_y[dir] + y, dx = dir_x[dir] + x;
        if(dy < 0 || N <= dy || dx < 0 || M <= dx) continue;
        dfs(dy, dx);
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
                    dfs(y, x);
                }
            }
        }
        printf("%d\n", worm);
    }
    return 0;
}
