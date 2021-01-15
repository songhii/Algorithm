//
//  main.cpp
//  9020
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>
using namespace std;

int p[10001];

void E() // 에라토스테네스의 체 적용하여 소수 판별
{
    fill_n(p, 10001, 1);
    p[0] = p[1] = 0;
    for(int i = 2; i*i <= 10001; i++)
    {
        if(p[i] == 0) continue;
        for(int j = i+i; j < 10001; j+=i)
        p[j] = 0;
    }
}

int main(int argc, const char * argv[]) {
    E();
    int T, n;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        if(p[n/2] == 1) // n/2 한 값이 제일 차이가 적게나서 n/2 부터 시작
        { // n/2 한 값이 소수면 그냥 출력 하면 됨 (예 n = 4, 6, 10, 22 등)
            printf("%d %d\n", n/2, n/2);
        }
        else // n/2 한 값이 소수가 아니면 n/2-1 부터 확인해보면 됨
        {
            int tmp = n/2-1;
            while(tmp > 1)
            {
                if(p[tmp] && p[n-tmp])
                {
                    printf("%d %d\n", tmp, n-tmp);
                    break;
                }
                tmp--;
            }
        }
    }
    return 0;
}
