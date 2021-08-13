//
//  main.cpp
//  1205
//
//  Created by songhee on 2021/08/13.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, song, P;
vector<int> list, check;

bool cmp(int a, int b) {
    return a > b;
}

int main(int argc, const char * argv[]) {
    scanf("%d %d %d", &N, &song, &P);
    for(int i = 0; i < N; i++) {
        int s; scanf("%d", &s);
        list.push_back(s);
    }
    
    if(N == P) {
        if(list[N-1] >= song) {
            printf("-1\n");
            return 0;
        }
    }
    else if(N == 0) {
        printf("1\n");
        return 0;
    }

    list.push_back(song);
    sort(list.begin(), list.end(), cmp);
    
    int num = 0, rank = 0;
    for(int i = 0; i < list.size(); i++) {
        num = i+1;
        if(i == 0) {
            rank = num;
            check.push_back(rank);
            continue;
        }
        if(list[i-1] != list[i]) {
            rank = num;
        }
        check.push_back(rank);
    }
    
    int idx = 0;
    for(int i = 0; i < list.size(); i++) {
        if(list[i] == song) {
            idx = i;
            break;
        }
    }
    printf("%d\n", check[idx]);
    return 0;
}
