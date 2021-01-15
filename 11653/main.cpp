//
//  main.cpp
//  11653
//
//  Created by songhee on 2021/01/14.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N, a = 2;
    scanf("%d", &N);
    if(N == 1) return 0;
    
    while(N > 1)
    {
        if(N % a > 0) a++;
        else
        {
            printf("%d\n", a);
            N /= a;
        }
    }
    return 0;
}

