//
//  main.cpp
//  2839
//
//  Created by songhee on 2021/01/13.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N, bag = 0;
    scanf("%d", &N);
    if(N == 4 || N == 7)
    {
        printf("-1\n");
        return 0;
    }
    
    if(N % 10 == 2 || N % 10 == 7)
        bag = 4;
    else if(N % 10 == 4 || N % 10 == 9)
        bag = 3;
    else if(N % 10 == 6 || N % 10 == 1)
        bag = 2;
    else if(N % 10 == 8 || N % 10 == 3)
        bag = 1;
    else if(N % 10 == 0 || N % 10 == 5)
        bag = 0;
    
    N -= (bag * 3);
    bag += (N / 5);
    printf("%d\n", bag);
    return 0;
}
