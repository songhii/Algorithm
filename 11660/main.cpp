//
//  main.cpp
//  11660
//
//  Created by songhee on 2021/04/28.
//

#include <iostream>
#include <cstring>
#define MAX 1024+1
using namespace std;

int N, M, x_1, y_1, x_2, y_2, ans;
int A[MAX][MAX], dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            scanf("%d", &A[i][j]);
            dp[i][j] = dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1] + A[i][j];
        }
    }
    for(int m = 0; m < M; m++)
    {
        scanf("%d %d %d %d", &x_1, &y_1, &x_2, &y_2);
        ans = dp[x_2][y_2] - dp[x_2][y_1 - 1] - dp[x_1 - 1][y_2] + dp[x_1 - 1][y_1 - 1];
        printf("%d\n", ans);
    }
    return 0;
}
