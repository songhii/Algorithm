//
//  main.cpp
//  2407
//
//  Created by songhee on 2021/05/08.
//

#include <iostream>
#include <algorithm>
#define MAX 100+1
using namespace std;

int N, M;
string dp[MAX][MAX];

string bigPlus(string a, string b)
{
    int sum = 0;
    string result = "";
    while(!a.empty() || !b.empty() || sum)
    {
        if(!a.empty())
        {
            sum += a.back() - '0';
            a.pop_back();
        }
        if(!b.empty())
        {
            sum += b.back() - '0';
            b.pop_back();
        }
        result.push_back((sum % 10) + '0');
        sum /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main(int argc, const char * argv[]) {
    dp[1][0] = dp[1][1] = "1";
    scanf("%d %d", &N, &M);
    for(int i = 2; i <= N; i++)
        for(int j = 0; j <= M; j++)
        {
            if(j-1 >= 0) dp[i][j] = bigPlus(dp[i-1][j-1], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    cout << dp[N][M] << endl;
    return 0;
}
