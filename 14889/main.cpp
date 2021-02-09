//
//  main.cpp
//  14889
//
//  Created by songhee on 2021/02/04.
//

#include <iostream>
#include <cmath>
#define TOTAL_MAX 20
using namespace std;

int N, mini = 100000000;
int team[TOTAL_MAX];
int play[TOTAL_MAX][TOTAL_MAX];

void dfs(int cnt, int pos)
{
    if(cnt == N/2)
    {
        int start, link;
        start = link = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(team[i] && team[j]) start += play[i][j];
                if(!team[i] && !team[j]) link += play[i][j];
            }
        }
        int tmp = abs(start-link);
        mini = mini <= tmp ? mini : tmp;
        return;
    }
    for(int i = pos; i < N; i++)
    {
        team[i] = true;
        dfs(cnt+1, i+1);
        team[i] = false;
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) scanf("%d", &play[i][j]);
    fill_n(team, TOTAL_MAX, false);
    dfs(0, 1);
    printf("%d\n", mini);
    return 0;
}
