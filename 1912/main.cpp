//
//  main.cpp
//  1912
//
//  Created by songhee on 2021/04/05.
//

#include <iostream>
#include <algorithm>
#define MAX 100000+1
using namespace std;

int n, maxi = -10000;
int arr[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);
    
    for(int i = 1; i <= n; i++)
    {
        dp[i] = arr[i];
        dp[i] = max(dp[i-1] + arr[i], dp[i]);
    }
    
    sort(dp+1, dp+n+1);
    printf("%d\n", dp[n]);
    return 0;
}
