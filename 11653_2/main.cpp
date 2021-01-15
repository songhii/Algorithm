//
//  main.cpp
//  11653_2
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d", &N);
    
    for(int i = 2; i * i <= N; i++)
    {
        while(N % i == 0)
        {
            printf("%d\n", i);
            N /= i;
        }
    }
    if(N > 1)
        printf("%d\n", N);
    return 0;
}
