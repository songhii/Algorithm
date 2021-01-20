//
//  main.cpp
//  1018
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    string black[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };
    string white[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };
    string board[50];
    
    scanf("%d %d", &N, &M);
    fflush(stdin);
    for(int i = 0; i < N; i++)
        cin >> board[i];
    
    int min = 1000000;
    int b_sum = 0, w_sum = 0;
    for(int i = 0; i <= N-8; i++)
    {
        for(int j = 0; j <= M-8; j++)
        {
            b_sum = w_sum = 0;
            for(int k = i; k < i+8; k++) // 한 판 시작
            {
                for(int l = j; l < j+8; l++)
                {
                    if(black[k-i][l-j] != board[k][l]) b_sum++;
                    if(white[k-i][l-j] != board[k][l]) w_sum++;
                }
            }
            int tmp = b_sum < w_sum ? b_sum : w_sum;
            min = tmp < min ? tmp : min;
        }
    }
    printf("%d\n", min);
    return 0;
}
