//
//  main.cpp
//  2455
//
//  Created by songhee on 2021/08/12.
//

#include <iostream>
using namespace std;

int maxi = -1, cnt;
int out[4], in[4];

int main(int argc, const char * argv[]) {
    for(int i = 0; i < 4; i++) scanf("%d %d", &out[i], &in[i]);
    cnt += in[0];
    maxi = max(maxi, cnt);
    for(int i = 1; i < 4; i++) {
        cnt -= out[i];
        maxi = max(maxi, cnt);
        cnt += in[i];
        maxi = max(maxi, cnt);
    }
    printf("%d\n", maxi);
    return 0;
}
