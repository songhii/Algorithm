//
//  main.cpp
//  2579
//
//  Created by songhee on 2021/03/15.
//

#include <iostream>
#include <algorithm>
#define MAX 300+1
using namespace std;

int S;
int score[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &S);
    for(int s = 1; s <= S; s++) scanf("%d", &score[s]);
    dp[1] = score[1]; dp[2] = score[1] + score[2];
    for(int x = 3; x <= S; x++)
        dp[x] = max(dp[x-3] + score[x-1] + score[x], dp[x-2] + score[x]);
    printf("%d\n", dp[S]);
    return 0;
}
