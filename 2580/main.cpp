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
vector<pair<int, int>> emp;

bool squ(int x, int y, int val)
{
    int x1 = (x/3) * 3; int y1 = (y/3) * 3;
    for(int i = x1; i < x1+3; i++)
    {
        for(int j = y1; j < y1+3; j++) if(sudoku[i][j] == val) return false;
    }
    return true;
}

bool height(int y, int val)
{
    for(int i = 0; i < 9; i++) if(sudoku[i][y] == val) return false;

    return true;
}

bool width(int x, int val)
{
    for(int i = 0; i < 9; i++) if(sudoku[x][i] == val) return false;
    return true;
}

void check(int idx)
{
    if(idx == emp.size())
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++) printf("%d ", sudoku[i][j]);
            printf("\n");
        }
        exit(EXIT_SUCCESS);
    }
    
    for(int val = 1; val < 10; val++)
    {
        int x = emp[idx].first; int y = emp[idx].second;
        if(width(x, val) && height(y, val) && squ(x, y, val))
        {
            sudoku[x][y] = val;
            check(idx+1);
            sudoku[x][y] = 0;
        }
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
    check(0);
    return 0;
}
