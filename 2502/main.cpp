//
//  main.cpp
//  2502
//
//  Created by songhee on 2021/05/06.
//

#include <iostream>
#define MAX 30+1

int D, K;
int dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &D, &K);
    
    for(int i = 1; i < K; i++)
    {
        dp[1] = i;
        for(int j = i; j < K; j++)
        {
            dp[2] = j;
            for(int d = 3; d <= D; d++)
            {
                dp[d] = dp[d-1] + dp[d-2];
                if(dp[D] == K)
                {
                    printf("%d\n%d\n", dp[1], dp[2]);
                    return 0;
                }
            }
        }
    }
    return 0;
}
