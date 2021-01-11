//
//  main.cpp
//  2292
//
//  Created by songhee on 2021/01/08.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d", &N);
    if(N == 1)
    {
        printf("%d\n", N);
        return 0;
    }
    
    int a = 2, b = 7, add_a = 6, add_b = 11, move = 2;
    while(1)
    {
        if(a <= N && N <= b) break;
        a += add_a;
        b = a + add_b;
        add_a += 6;
        add_b += 6;
        move++;
    }
    printf("%d\n", move);
    return 0;
}
