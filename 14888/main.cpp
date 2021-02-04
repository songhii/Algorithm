//
//  main.cpp
//  14888
//
//  Created by songhee on 2021/02/03.
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
    if(Aidx < 1)
    {
        for(int i = 0; i < 4; i++)
        {
            if(oper[i] > 0)
            {
                oper[i]--;
                if(i == 0) ans = A[Aidx] + A[Aidx+1];
                else if(i == 1) ans = A[Aidx] - A[Aidx+1];
                else if(i == 2) ans = A[Aidx] * A[Aidx+1];
                else if(i == 3) ans = A[Aidx] / A[Aidx+1];
                dfs(Aidx+2, ans);
                oper[i]++;
            }
        }
    }
    else
    {
        for(int i = 0; i < 4; i++)
        {
            if(oper[i] > 0)
            {
                oper[i]--;
                int tmp = ans;
                if(i == 0) tmp += A[Aidx];
                else if(i == 1) tmp -= A[Aidx];
                else if(i == 2) tmp *= A[Aidx];
                else if(i == 3) tmp /= A[Aidx];
                dfs(Aidx+1, tmp);
                oper[i]++; tmp = ans;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    scanf("%d %d %d %d", &oper[0], &oper[1], &oper[2], &oper[3]);
    dfs(0, 0);
    printf("%d\n%d\n", maxi, mini);
    return 0;
}
