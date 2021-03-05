//
//  main.cpp
//  9184
//
//  Created by songhee on 2021/03/05.
//

#include <iostream>
#define MAX 51

int a, b, c;
int dp[MAX][MAX][MAX];

int w(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0) return 1;
    if(dp[a][b][c] > 0) return dp[a][b][c];
    if(a > 20 or b > 20 or c > 20)
    {
        dp[a][b][c] = w(20, 20, 20);
        return dp[a][b][c];
    }
    if(a < b and b < c)
    {
        dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        return dp[a][b][c];
    }
    dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    return dp[a][b][c];
}

int main(int argc, const char * argv[]) {
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a == -1 && b == -1 && c == -1) return 0;
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
    }
}
g
