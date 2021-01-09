//
//  main.cpp
//  10870
//
//  Created by songhee on 2021/01/08.
//

#include <iostream>

int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
