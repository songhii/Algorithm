//
//  main.cpp
//  1463_2
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
    for(int n = 2; n <= N; n++)
    {
        dp[n] = dp[n-1]+1;
        if(n % 2 == 0) dp[n] = min(dp[n], dp[n/2]+1);
        if(n % 3 == 0) dp[n] = min(dp[n], dp[n/3]+1);
    }
    printf("%d\n", dp[N]);
    return 0;
}
