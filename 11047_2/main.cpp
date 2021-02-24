//
//  main.cpp
//  11047_2
//
//  Created by songhee on 2021/02/24.
//

#include <iostream>
#define MAX 10

int N, K, coin = 0;
int A[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    for(int i = N-1; i > -1; i--)
    {
        while(K/A[i] != 0)
        {
            coin += (K/A[i]);
            K %= A[i];
        }
    }
    printf("%d\n", coin);
    return 0;
}
