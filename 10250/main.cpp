//
//  main.cpp
//  10250
//
//  Created by songhee on 2021/01/12.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int T, H, W, N, x, y;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        x = N / H + 1;
        if(N % H != 0)
            y = N % H;
        else
        {
            x--;
            y = H;
        }
        if(x < 10)
            printf("%d0%d\n", y, x);
        else
            printf("%d%d\n", y, x);
    }
    return 0;
}
