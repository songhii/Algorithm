//
//  main.cpp
//  2565
//
//  Created by songhee on 2021/04/02.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 500+1
using namespace std;

int N, maxi = -1;
int dp[MAX];
vector<pair<int, int>> AB;

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    
    AB.push_back({0, 0});
    for(int n = 0; n < N; n++)
    {
        int A, B; scanf("%d %d", &A, &B);
        AB.push_back({A, B});
    }
    sort(AB.begin(), AB.end());
    
    for(int i = 1; i < 501; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(AB[j].second < AB[i].second) dp[i] = max(dp[i], dp[j]+1);
            maxi = maxi > dp[i] ? maxi : dp[i];
        }
    }
    printf("%d\n", N-maxi);
    return 0;
}
