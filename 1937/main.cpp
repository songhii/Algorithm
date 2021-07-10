//
//  main.cpp
//  1937
//
//  Created by songhee on 2021/07/10.
//

#include <iostream>
#include <cstring>
#define MAX 500+1
using namespace std;

int N, K;
int T[MAX][MAX], dp[MAX][MAX];
int dir_x[4] = {-1, 1, 0, 0}, dir_y[4] = {0, 0, -1, 1};

int dfs(int x, int y)
{
    if(dp[x][y] != -1) return dp[x][y];
    dp[x][y] = 1;
    for(int i = 0; i < 4; i++)
    {
        int dx = x + dir_x[i], dy = y + dir_y[i];
        if(dx < 1 || N < dx || dy < 1 || N < dy) continue;
        if(T[x][y] < T[dx][dy])
        {
            dp[x][y] = max(dp[x][y], dfs(dx, dy) + 1);
        }
    }
    return dp[x][y];
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            scanf("%d", &T[i][j]);
            dp[i][j] = -1;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            dfs(i, j);
        }
    }
    
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            K = max(K, dp[i][j]);
    printf("%d\n", K);
    
    return 0;
}
