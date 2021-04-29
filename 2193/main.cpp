//
//  main.cpp
//  2193
//
//  Created by songhee on 2021/04/29.
//

#include <iostream>
#define MAX 90+1

int N;
long dp[MAX] = {0, 1, };

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 2; i <= N; i++) dp[i] = dp[i-1] + dp[i-2];
    printf("%ld\n", dp[N]);
    return 0;
}
