//
//  main.cpp
//  9095
//
//  Created by songhee on 2021/04/09.
//

#include <iostream>
#define MAX 10+1

int T, N;
int dp[MAX] = {0, 1, 2, 4, };

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        scanf("%d", &N);
        for(int n = 4; n <= N; n++)
        {
            dp[n] = dp[n-1] + dp[n-2] + dp[n-3];
        }
        printf("%d\n", dp[N]);
    }
    return 0;
}
