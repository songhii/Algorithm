//
//  main.cpp
//  9507
//
//  Created by songhee on 2021/05/04.
//

#include <iostream>
#define MAX 67+1

int T, n;
long dp[MAX];

long koong(int i)
{
    if(dp[i] > 0) return dp[i];
    if(i < 2) return 1;
    else if(i == 2) return 2;
    else if(i == 3) return 4;
    else return koong(i-1) + koong(i-2) + koong(i-3) + koong(i-4);
}

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        scanf("%d", &n);
        for(int i = 0; i <= n; i++)
        {
            dp[i] = koong(i);
        }
        printf("%ld\n", dp[n]);
    }
    return 0;
}
