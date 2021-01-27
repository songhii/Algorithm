//
//  main.cpp
//  9663
//
//  Created by songhee on 2021/01/27.
//

#include <iostream>
#include <cmath>
using namespace std;

int *col; // 퀸의 열 번호에 해당하는 행 번호 저장 배열
int N, cnt = 0; // cnt : 해의 개수

bool possible(int level)
{
    // 0 ~ level-1 열과 level 열이 서로 위협되지 않는지 검사
    for(int j = 0; j < level; j++)
    {
        if(col[j] == col[level] || abs(level-j) == abs(col[level]-col[j])) return false;
        // 1. j열의 행과, level열의 행이 같다면 = 퀸이 일직선에 있다면 false
        // 2. level열 - j열 (너비) 와 col[level] - col[j] (level열의 행 - j열의 행 = 높이) 이 같다면 = 퀸이 대각선에 있다면 false
    }
    return true; // 위 두가지에 해당하지 않고 for 문이 끝나면 퀸의 위치가 적합하므로 true 리턴
}

void backtracking(int level) // 백트래킹 함수
{
    if(N == level) // 모든 열을 다 채운 경우 -> 하나의 해를 구한 것 의미
    {
        cnt++; // 해의 개수 증가시킨다
        return;
    }
    for(int i = 0; i < N; i++) // level 번 열의 i 번 행에 적합한지 검사
    {
        col[level] = i; // level 번 열에 i 번 행에 있다고 가정
        if(possible(level)) // 위에서 한 가정이 맞는지 검사 진행, 퀸의 위치가 적합하다면
            backtracking(level+1); // 다음 열을 검사
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    col = new int[N];
    backtracking(0); // 0번 열부터 검사 시작
    printf("%d\n", cnt);
    delete col;
    return 0;
}
