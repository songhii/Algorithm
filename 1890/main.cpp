//
//  main.cpp
//  1890
//
//  Created by songhee on 2021/05/25.
//

#include <iostream>
#include <cstring>
#define ll long long
#define MAX 100+1

int N;
ll map[MAX][MAX], dp[MAX][MAX];

ll dfs(int x, int y)
{
    if(x == N && y == N) return 1;
    if(dp[x][y] != -1) return dp[x][y];
    dp[x][y] = 0;
    
    // 아래쪽으로 점프
    int dx = x + map[x][y];
    if(1 <= dx && dx <= N)
        dp[x][y] += dfs(dx, y);
    
    // 오른쪽으로 점프
    int dy = y + map[x][y];
    if(1 <= dy && dy <= N)
        dp[x][y] += dfs(x, dy);
    
    return dp[x][y];
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++) scanf("%lld", &map[i][j]);
    }
    memset(dp, -1, sizeof(dp));
    printf("%lld\n", dfs(1, 1));
    return 0;
}
