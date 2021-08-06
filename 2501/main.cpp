//
//  main.cpp
//  2501
//
//  Created by songhee on 2021/08/06.
//

#include <iostream>
#define MAX 10000+1
using namespace std;

int N, K;
int q[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int i = 1; i <= N; i++) {
        if(N % i == 0) q[i] = 1;
    }
    
    int tmp = 0;
    for(int i = 1; i <= N; i++) {
        if(q[i] == 1) tmp++;
        if(tmp == K) {
            printf("%d\n", i);
            break;
        }
        else if(tmp > K || (i == N && tmp < K)) {
            printf("0\n");
            break;
        }
    }
    return 0;
}
