//
//  main.cpp
//  16987
//
//  Created by songhee on 2021/08/06.
//

#include <iostream>
#define MAX 8+1
using namespace std;

int N, answer;
int S[MAX], W[MAX];

void solve(int idx) {
    if(idx == N+1) {
        int cnt = 0;
        for(int i = 1; i <= N; i++) {
            if(S[i] <= 0) cnt++;
        }
        answer = max(answer, cnt);
        return;
    }
    
    if(S[idx] <= 0) solve(idx+1);
    else {
        bool flag = 0;
        for(int i = 1; i <= N; i++) {
            if(i == idx || S[i] <= 0) continue;
            
            S[idx] -= W[i];
            S[i] -= W[idx];
            
            flag = 1;
            solve(idx+1);
            
            S[idx] += W[i];
            S[i] += W[idx];
        }
        if(!flag) solve(N+1);
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d %d", &S[i], &W[i]);
    solve(1);
    printf("%d\n", answer);
    return 0;
}
