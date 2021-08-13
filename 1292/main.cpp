//
//  main.cpp
//  1292
//
//  Created by songhee on 2021/08/13.
//

#include <iostream>
#include <vector>
using namespace std;

int A, B, sum;
vector<int> v;

int main(int argc, const char * argv[]) {
    scanf("%d %d", &A, &B);
    v.push_back(0);
    for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= i; j++) {
            v.push_back(i);
            if(v.size() == B+1) break;
        }
    }
    for(int i = A; i <= B; i++) sum += v[i];
    printf("%d\n", sum);
    return 0;
}
