//
//  main.cpp
//  2775_2
//
//  Created by songhee on 2021/01/08.
//

#include <iostream>

int total(int k, int n)
{
    if(k == 0) return n;
    if(n == 1) return 1;
    return total(k-1, n) + total(k, n-1);
}

int main(int argc, const char * argv[]) {
    int T, k, n;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d\n %d", &k, &n);
        printf("%d\n", total(k, n));
    }
    return 0;
}
