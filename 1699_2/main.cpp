//
//  main.cpp
//  1699_2
//
//  Created by songhee on 2021/04/21.
//

#include <iostream>
#include <algorithm>
#define MAX 100000+1
using namespace std;

int N;
long dp[MAX] = {0, 1, 2, 3, };

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 4; i <= N; i++)
    {
        dp[i] = i;
        for(int j = 2; j * j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    printf("%ld\n", dp[N]);
    return 0;
}
