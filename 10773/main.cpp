//
//  main.cpp
//  10773
//
//  Created by songhee on 2021/08/10.
//

#include <iostream>
#include <stack>
using namespace std;

int K, sum;
stack<int> s;

int main(int argc, const char * argv[]) {
    scanf("%d", &K);
    for(int i = 0; i < K; i++) {
        int ipt; scanf("%d", &ipt);
        if(ipt == 0) s.pop();
        else s.push(ipt);
    }
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        sum += top;
    }
    printf("%d\n", sum);
    return 0;
}
