//
//  main.cpp
//  1520
//
//  Created by songhee on 2021/05/17.
//

#include <iostream>
#include <cstring>
#define MAX 500+1

int M, N;
int dir_x[4] = {-1, 1, 0, 0}, dir_y[4] = {0, 0, -1, 1};
int map[MAX][MAX], dp[MAX][MAX];

int dfs(int x, int y)
{
    if(dp[x][y] != -1) return dp[x][y];
    if(x == M && y == N) return 1;
    dp[x][y] = 0;
    for(int d = 0; d < 4; d++)
    {
        int dx = x + dir_x[d], dy = y + dir_y[d];
        if(dx < 0 || M < dx || dy < 0 || N < dy) continue;
        if(map[x][y] > map[dx][dy]) // (x, y) -> (dx, dy)
            dp[x][y] += dfs(dx, dy);
    }
    return dp[x][y];
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &M, &N);
    for(int i = 1; i <= M; i++)
    {
        for(int j = 1; j <= N; j++) scanf("%d", &map[i][j]);
    }
    memset(dp, -1, sizeof(dp));
    printf("%d\n", dfs(1, 1));
    return 0;
}
