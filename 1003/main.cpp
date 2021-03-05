//
//  main.cpp
//  1003
//
//  Created by songhee on 2021/03/05.
//

#include <iostream>
#define MAX 41

int T, N;
bool ready[MAX] = {1, 1, };
int value[MAX] = {0, 1, }, zero[MAX] = {1, 0, }, one[MAX] = {0, 1, };

int f(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    if(ready[n]) return value[n];
    ready[n] = true;
    value[n] = f(n-1) + f(n-2);
    zero[n] += (zero[n-1] + zero[n-2]);
    one[n] += (one[n-1] + one[n-2]);
    return value[n];
}

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        scanf("%d", &N);
        f(N);
        printf("%d %d\n", zero[N], one[N]);
    }
    return 0;
}
