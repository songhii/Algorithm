//
//  main.cpp
//  13458
//
//  Created by songhee on 2021/08/05.
//

#include <iostream>
using namespace std;

long long N, B, C, answer;
long long A[1000001];

int main(int argc, const char * argv[]) {
    scanf("%lld", &N);
    for(int i = 1; i <= N; i++) scanf("%lld", &A[i]);
    scanf("%lld %lld", &B, &C);
    
    for(int i = 1; i <= N; i++) A[i] -= B;
    answer += N;
    
    for(int i = 1; i <= N; i++) {
        if(A[i] > 0) {
            if(A[i] >= C) {
                long long tmp = A[i] / C;
                if(A[i] % C != 0) tmp++;
                answer += tmp;
            }
            else answer++;
        }
    }
    
    printf("%lld\n", answer);
    return 0;
}
