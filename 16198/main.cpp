//
//  main.cpp
//  16198
//
//  Created by songhee on 2021/08/06.
//

#include <iostream>
#define MAX 10+1
using namespace std;

int N, answer;
int visit[MAX], W[MAX];

void energy(int cnt, int sum) {
    if(cnt == N-2) {
        if(answer < sum) answer = sum;
        return;
    }
    for(int i = 2; i < N; i++) {
        if(!visit[i]) {
            int left = i-1, right = i+1;
            while(visit[left] && 0 < left) left--;
            while(visit[right] && right < N) right++;
            visit[i] = 1;
            energy(cnt+1, sum + (W[left] * W[right]));
            visit[i] = 0;
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d", &W[i]);
    energy(0, 0);
    printf("%d\n", answer);
    return 0;
}
