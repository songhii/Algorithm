//
//  main.cpp
//  2156
//
//  Created by songhee on 2021/03/15.
//

#include <iostream>
#include <algorithm>
#define MAX 10000+1
using namespace std;

int N, maxi = -1;
int cup[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int n = 1; n <= N; n++) scanf("%d", &cup[n]);
    dp[1] = cup[1]; dp[2] = cup[1] + cup[2];
    for(int n = 3; n <= N; n++)
    {
        dp[n] = max(dp[n-3] + cup[n-1] + cup[n], dp[n-2] + cup[n]);
        dp[n] = max(dp[n], dp[n-1]);
    }
    for(int n = 1; n <= N; n++)
        maxi = maxi >= dp[n] ? maxi : dp[n];
    printf("%d\n", maxi);
    return 0;
}
