//
//  main.cpp
//  14888_2
//
//  Created by songhee on 2021/02/04.
//

#include <iostream>
#include <vector>
using namespace std;

int N, mini = 1000000001, maxi = -1000000000;
int oper[4];
int A[11];

void dfs(int Aidx, int ans)
{
    if(Aidx >= N)
    {
        mini = mini < ans ? mini : ans;
        maxi = maxi > ans ? maxi : ans;
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        if(oper[i])
        {
            oper[i]--;
            if(i == 0) dfs(Aidx+1, ans + A[Aidx]);
            else if(i == 1) dfs(Aidx+1, ans - A[Aidx]);
            else if(i == 2) dfs(Aidx+1, ans * A[Aidx]);
            else if(i == 3) dfs(Aidx+1, ans / A[Aidx]);
            oper[i]++;
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    scanf("%d %d %d %d", &oper[0], &oper[1], &oper[2], &oper[3]);
    dfs(1, A[0]);
    printf("%d\n%d\n", maxi, mini);
    return 0;
}
