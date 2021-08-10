//
//  main.cpp
//  1966
//
//  Created by songhee on 2021/08/09.
//

#include <iostream>
#include <queue>
#define MAX 100
using namespace std;

int T, N, M;

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int t = 0; t < T; t++) {
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        scanf("%d %d", &N, &M);
        for(int i = 0; i < N; i++) {
            int tmp; scanf("%d", &tmp);
            q.push({i, tmp});
            pq.push(tmp);
        }
        int cnt = 0;
        while(!q.empty()) {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if(pq.top() == val) {
                pq.pop();
                cnt++;
                if(idx == M) {
                    printf("%d\n", cnt);
                    break;
                }
            }
            else q.push({idx, val});
        }
    }
    return 0;
}
