//
//  main.cpp
//  11047
//
//  Created by songhee on 2021/02/24.
//

#include <iostream>
#define MAX 10

int N, K, coin = 0;
int A[MAX];

void greedy(int money, int idx)
{
    if(money == 0 || idx < 0) return;
    if(A[idx] <= money)
    {
        coin++;
        greedy(money-A[idx], idx);
    }
    else greedy(money, idx-1);
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    greedy(K, N-1);
    printf("%d\n", coin);
    return 0;
}
