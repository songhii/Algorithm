//
//  main.cpp
//  15989
//
//  Created by songhee on 2021/06/16.
//

#include <iostream>
#include <algorithm>
#define MAX 10000+1
using namespace std;

int T, N, maxi = -1;
int A[MAX], dp[MAX][4];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d", &N);
        maxi = max(maxi, N);
        A[test] = N;
    }
    
    dp[1][1] = 1;
    dp[2][1] = dp[2][2] = 1;
    dp[3][1] = dp[3][2] = dp[3][3] = 1;
    
    for(int i = 4; i <= maxi; i++)
    {
        dp[i][1] = 1;
        dp[i][2] = dp[i-2][1] + dp[i-2][2];
        dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
    }
    
    for(int test = 1; test <= T; test++)
    {
        int i = A[test];
        printf("%d\n", dp[i][1] + dp[i][2] + dp[i][3]);
    }
    return 0;
}
