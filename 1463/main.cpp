//
//  main.cpp
//  1463
//
//  Created by songhee on 2021/03/16.
//

#include <iostream>
#include <algorithm>
#define MAX 1000001 * 3
using namespace std;

int N;
int dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    dp[2] = dp[3] = 1;
    for(int n = 3; n <= N; n++)
    {
        if(dp[n+1] > 0)
        {
            if(dp[n+1] > dp[n]+1) dp[n+1] = dp[n]+1;
        }
        else dp[n+1] = dp[n]+1;
        
        if(dp[n*2] > 0)
        {
            if(dp[n*2] > dp[n]+1) dp[n*2] = dp[n]+1;
        }
        else dp[n*2] = dp[n]+1;
        
        if(dp[n*3] > 0)
        {
            if(dp[n*3] > dp[n]+1) dp[n*3] = dp[n]+1;
        }
        else dp[n*3] = dp[n]+1;
        
    }
    printf("%d\n", dp[N]);
    return 0;
}
