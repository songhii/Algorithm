//
//  main.cpp
//  1193
//
//  Created by songhee on 2021/01/11.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N, a = 1, r = 1, sum = 2, x, y;
    scanf("%d", &N);
    if (N == 1)
    {
        printf("1/1\n");
        return 0;
    }
    while(1)
    {
        a += r;
        r++;
        sum++;
        if(a <= N && N < a+r) break;
    }
    if(sum % 2 == 0)
    {
        x = sum;
        for(int i = a; i < a+r; i++)
        {
            x--;
            y = sum-x;
            if(i == N) break;
        }
    }
    else
    {
        x = 0;
        for(int i = a; i < a+r; i++)
        {
            x++;
            y = sum-x;
            if(i == N) break;
        }
    }
    printf("%d/%d\n", x, y);
    return 0;
}
