//
//  main.cpp
//  10817
//
//  Created by songhee on 2021/08/10.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main(int argc, const char * argv[]) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    sort(v.begin(), v.end());
    printf("%d\n", v[1]);
    return 0;
}
