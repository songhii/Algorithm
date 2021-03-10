//
//  main.cpp
//  1149
//
//  Created by songhee on 2021/03/10.
//

#include <iostream>
#include <algorithm>
#define MAX 1000+1
using namespace std;

int N;
int dp[4][MAX], cost[4][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
    {
        scanf("%d %d %d", &cost[1][i], &cost[2][i], &cost[3][i]);
    }
    
    dp[1][1] = cost[1][1];
    dp[2][1] = cost[2][1];
    dp[3][1] = cost[3][1];
    
    for(int j = 2; j <= N; j++)
    {
        dp[1][j] = min({dp[2][j-1], dp[3][j-1]}) + cost[1][j];
        dp[2][j] = min({dp[1][j-1], dp[3][j-1]}) + cost[2][j];
        dp[3][j] = min({dp[1][j-1], dp[2][j-1]}) + cost[3][j];
    }
    
    printf("%d\n", min({dp[1][N], dp[2][N], dp[3][N]}));
    return 0;
}
