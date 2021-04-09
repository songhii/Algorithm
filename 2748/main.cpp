//
//  main.cpp
//  2748
//
//  Created by songhee on 2021/04/09.
//

#include <iostream>
#define MAX 90+1

int N;
long dp[MAX] = {0, 1, };

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int n = 2; n <= N; n++) dp[n] = dp[n-1] + dp[n-2];
    printf("%ld\n", dp[N]);
    return 0;
}
