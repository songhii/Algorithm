//
//  main.cpp
//  backtracking(Queen)
//
//  Created by songhee on 2021/01/27.
//

#include <iostream>
#include <cmath>
using namespace std;

int *col;
int N, cnt = 0;

bool possible(int level)
{
    for(int j = 0; j < level; j++)
    {
        if(col[j] == col[level] || abs(level-j) == abs(col[level]-col[j])) return false;
    }
    return true;
}

void backtracking(int level)
{
    if(N == level)
    {
        cnt++;
        return;
    }
    for(int i = 0; i < N; i++)
    {
        col[level] = i;
        if(possible(level))
            backtracking(level+1);
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    col = new int[N];
    backtracking(0);
    printf("%d\n", cnt);
    delete col;
    return 0;
}
