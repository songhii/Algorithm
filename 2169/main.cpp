//
//  main.cpp
//  2169
//
//  Created by songhee on 2021/07/28.
//

#include <iostream>
#define MAX 1000+1
#define INIT 987654321
using namespace std;

int N, M;
int map[MAX][MAX], visit[MAX][MAX], dp[MAX][MAX][3];
int dirx[3] = {1, 0, 0}, diry[3] = {0, -1, 1};

int dfs(int x, int y, int z)
{
    if(x == N && y == M) return map[x][y];
    if(dp[x][y][z] != -INIT) return dp[x][y][z];
    
    for(int i = 0; i < 3; i++)
    {
        int dx = dirx[i] + x, dy = diry[i] + y;
        if(dx < 1 || N < dx || dy < 1 || M < dy || visit[dx][dy]) continue;
        visit[dx][dy] = 1;
        dp[x][y][z] = max(dp[x][y][z], dfs(dx, dy, i) + map[x][y]);
        visit[dx][dy] = 0;
    }
    return dp[x][y][z];
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            scanf("%d", &map[i][j]);
            dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = -INIT;
        }
    }
    visit[1][1] = 1;
    printf("%d\n", dfs(1, 1, 0));
    return 0;
}
