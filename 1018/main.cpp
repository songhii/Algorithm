//
//  main.cpp
//  1018
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N, M; scanf("%d %d", &N, &M);
    char board[50][50];
    char black[8][8] = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
        
    };
    char white[8][8] = {
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
        
    };
    fflush(stdin);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
           scanf("%c", &board[i][j]);

        fflush(stdin);
    }
        
    int min = 1000000;
    int b_sum = 0, w_sum = 0, a = 0, b = 0;
    for(int i = 0; i <= N-8; i++)
    {
        for(int j = 0; j <= M-8; j++)
        {
            b_sum = w_sum = a = b = 0;
            for(int k = i; k < i+8; k++) // 한 판 시작
            {
                for(int l = j; l < j+8; l++)
                {
                    if(black[a][b] != board[k][l]) b_sum++;
                    if(white[a][b] != board[k][l]) w_sum++;
                    b++;
                }
                a++; b = 0;
            }
            int tmp = b_sum < w_sum ? b_sum : w_sum;
            min = tmp < min ? tmp : min;
        }
    }
    printf("%d\n", min);
    return 0;
}
