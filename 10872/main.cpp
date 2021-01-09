//
//  main.cpp
//  10872
//
//  Created by songhee on 2021/01/08.
//

#include <iostream>

int fac(int N)
{
    if(N == 0)  return 1;
    return N * fac(N-1);
}

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d", &N);
    printf("%d\n", fac(N));
    return 0;
}
