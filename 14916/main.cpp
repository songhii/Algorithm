//
//  main.cpp
//  14916
//
//  Created by songhee on 2021/05/07.
//

#include <iostream>
#define MAX 100000+1

int N;
int dp[MAX] = {0, -1, 1, -1, };

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 4; i <= N; i++)
    {
        if(i-5 >= 0 && dp[i-5] >= 0)
        {
            dp[i] += (dp[i-5] + 1);
        }
        else if(i-2 >= 0 && dp[i-2] >= 0)
        {
            dp[i] += (dp[i-2] + 1);
        }
        else dp[i] = -1;
    }
    printf("%d\n", dp[N]);
    return 0;
}
