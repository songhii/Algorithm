//
//  main.cpp
//  1149_backtracking
//
//  Created by songhee on 2021/03/10.
//

#include <iostream>
#define MAX 1000+1

int N, min = 1000000000;
int visit[MAX];
int cost[MAX][3];

void house(int n, int c, int sum)
{
    if(n == N)
    {
        min = min <= sum ? min : sum;
        return;
    }
    
    for(int j = 1; j < 4; j++)
    {
        if(c == j) continue;
        house(n+1, j, sum + cost[n+1][j]);
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) for(int j = 1; j < 4; j++) scanf("%d", &cost[i][j]);
    
    visit[1] = 1;
    for(int j = 1; j < 4; j++) house(1, j, cost[1][j]);
    
    printf("%d\n", min);
    return 0;
}
