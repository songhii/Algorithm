//
//  main.cpp
//  9251
//
//  Created by songhee on 2021/04/02.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#define MAX 1000+1
using namespace std;

string X, Y;
int dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    cin >> X >> Y;
    for(int x = 1; x <= X.length(); x++)
    {
        for(int y = 1; y <= Y.length(); y++)
        {
            if(X[x-1] == Y[y-1]) dp[x][y] = dp[x-1][y-1] + 1;
            else dp[x][y] = max(dp[x-1][y], dp[x][y-1]);
        }
    }
    printf("%d\n", dp[X.length()][Y.length()]);
    return 0;
}
