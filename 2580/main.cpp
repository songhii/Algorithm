//
//  main.cpp
//  2580
//
//  Created by songhee on 2021/02/01.
//

#include <iostream>
#include <vector>
using namespace std;

int sudoku[9][9];
int visited[10];
bool full = false;
vector<pair<int, int>> emp;

bool squ(int x, int y, int val)
{
    //
    printf("3. s(%d, %d, %d)\n", x, y, val);
    fill_n(visited, 10, 0); visited[val] = 1;
    
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    if(0 <= x && x <= 2) { x1 = 0; x2 = 2; }
    else if(3 <= x && x <= 5) { x1 = 3; x2 = 5; }
    else if(6 <= x && x <= 8) { x1 = 6; x2 = 8; }
    
    if(0 <= y && y <= 2) { y1 = 0; y2 = 2; }
    else if(3 <= y && y <= 5) { y1 = 3; y2 = 5; }
    else if(6 <= y && y <= 8) { y1 = 6; y2 = 8; }
    
    for(int i = x1; i <= x2; i++)
    {
        for(int j = y1; j <= y2; j++)
        {
            if((x == i && y == j)) continue;
            if(!sudoku[i][j]) continue;
            if(visited[sudoku[i][j]]) return false;
            visited[sudoku[i][j]] = 1;
        }
    }
    return true;
}

bool height(int x, int y, int val)
{
    //
    printf("2. h(%d, %d, %d)\n", x, y, val);
    fill_n(visited, 10, 0); visited[val] = 1;
    for(int i = 0; i < 9; i++)
    {
        if(x == i) continue;
        if(!sudoku[i][y]) continue;
        if(visited[sudoku[i][y]]) return false;
        visited[sudoku[i][y]] = 1;
    }
    return true;
}

bool width(int x, int y, int val)
{
    //
    printf("1. width(%d, %d, %d)\n", x, y, val);
    fill_n(visited, 10, 0); visited[val] = 1;
    for(int i = 0; i < 9; i++)
    {
        if(y == i) continue;
        if(!sudoku[x][i]) continue;
        printf("width(%d, %d, %d)에서 sudoku[%d][%d]의 값 = %d\n", x, y, val, x, i, sudoku[x][i]);
        if(visited[sudoku[x][i]]) return false;
        visited[sudoku[x][i]] = 1;
    }
    return true;
}

void check(int x, int y, int idx)
{
    int tmp = 0;
    if(idx >= emp.size()) return;
    for(int val = 1; val < 10; val++)
    {
        fill_n(visited, 10, 0);
        printf("# val : %d\n", val);
        full = false;
        tmp = sudoku[x][y];
        if(width(x, y, val) && height(x, y, val) && squ(x, y, val))
        {
            printf("!!! check true !!!\n");
            full = true;
            sudoku[x][y] = val;
            printf("## sudoku[4][2] = %d\n", sudoku[4][2]);
            int x = emp[idx+1].first; int y = emp[idx+1].second;
            check(x, y, idx+1);
        }
    }
    if(!full)
    {
//        sudoku[x][y] = tmp;
        return;
    }
}

int main(int argc, const char * argv[]) {
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &sudoku[i][j]);
            if(!sudoku[i][j]) emp.push_back({i, j});
        }
    }
    int x = emp[0].first; int y = emp[0].second;
    check(x, y, 0);
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++) printf("%d ", sudoku[i][j]);
        printf("\n");
    }
    
    return 0;
}

