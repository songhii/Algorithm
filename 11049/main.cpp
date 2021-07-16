//
//  main.cpp
//  11049
//
//  Created by songhee on 2021/07/13.
//

#include <iostream>
#define MAX 500+1
#define INF 2147483647
using namespace std;

int N;
int mat[MAX][2], dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
        scanf("%d %d", &mat[i][0], &mat[i][1]);
    
    // 연속한 행렬 2개씩 계산
    for(int i = 1; i <= N; i++)
        dp[i][i+1] = mat[i][0] * mat[i][1] * mat[i+1][1];
    
    // 연속한 행렬 3~N개씩 계산
    for(int m = 2; m <= N; m++)
    {
        // i = 시작 행렬 번호
        for(int i = 1; i <= N-m; i++)
        {
            // j = 종료 행렬 번호
            int j = m+i;
            
            dp[i][j] = INF;
            // k = 기준점 행렬 번호
            for(int k = i; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + mat[i][0] * mat[k][1] * mat[j][1]);
        }
    }
    printf("%d\n", dp[1][N]);
    return 0;
}
