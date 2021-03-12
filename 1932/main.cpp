//
//  main.cpp
//  1932
//
//  Created by songhee on 2021/03/12.
//

#include <iostream>
#include <algorithm>
#define MAX 500+1
using namespace std;

int N, maxi = -1;
int dp[MAX][MAX];
int value[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int x = 1; x <= N; x++)
    {
        for(int y = 1; y < x+1; y++)
            scanf("%d", &value[x][y]);
    }
    for(int x = 1; x <= N; x++)
    {
        for(int y = 1; y <= x+1; y++)
            dp[x][y] = max({dp[x-1][y], dp[x-1][y-1]}) + value[x][y];
    }
    for(int y = 1; y <= N; y++) maxi = maxi >= dp[N][y] ? maxi :dp[N][y];
    printf("%d\n", maxi);
    return 0;
}
