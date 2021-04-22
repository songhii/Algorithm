//
//  main.cpp
//  11048
//
//  Created by songhee on 2021/04/22.
//

#include <iostream>
#include <algorithm>
#define MAX 1000+1
using namespace std;

int N, M;
int dir_x[3] = {1, 0, 1};
int dir_y[3] = {0, 1, 1};
int C[MAX][MAX], dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++) scanf("%d", &C[i][j]);
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            dp[i][j] = max(dp[i][j], dp[i-1][j-1]);
            dp[i][j] += C[i][j];
        }
    }
    printf("%d\n", dp[N][M]);
    return 0;
}
