//
//  main.cpp
//  2231
//
//  Created by songhee on 2021/01/20.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    for(int i = N-54; i < N; i++) // 시간 줄이기 위해 i = 1 에서 i = N-54로 수정
    {
        int sum = i, tmp = i;
        while(tmp > 0)
        {
            sum += (tmp % 10);
            tmp /= 10;
        }
        if(sum == N)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
ㅎ
