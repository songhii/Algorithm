//
//  main.cpp
//  17626
//
//  Created by songhee on 2021/06/25.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX 50000+1
using namespace std;

int N;
int dp[MAX] = {1, 1, };

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 2; i <= N; i++)
    {
        dp[i] = i;
        for(int j = 2; j*j <= i; j++)
        {
            if(i == pow(j, 2))
            {
                dp[i] = 1;
                break;
            }
            dp[i] = min(dp[i], dp[i-j*j] + dp[j*j]);
        }
    }
    printf("%d\n", dp[N]);
    return 0;
}
