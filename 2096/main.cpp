//
//  main.cpp
//  2096
//
//  Created by songhee on 2021/05/28.
//

#include <iostream>
#include <algorithm>
using namespace std;

int N, maxi = -1, mini = 100001;
int a, b, c, maxdp[4], mindp[4];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    scanf("%d %d %d", &a, &b, &c);
    maxdp[1] = mindp[1] = a;
    maxdp[2] = mindp[2] = b;
    maxdp[3] = mindp[3] = c;
    
    for(int i = 2; i <= N; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        int tmp1 = maxdp[1], tmp3 = maxdp[3];
        maxdp[1] = max(maxdp[1], maxdp[2]) + a;
        maxdp[3] = max(maxdp[2], maxdp[3]) + c;
        maxdp[2] = max(maxdp[2],max(tmp1, tmp3)) + b;
        
        tmp1 = mindp[1]; tmp3 = mindp[3];
        mindp[1] = min(mindp[1], mindp[2]) + a;
        mindp[3] = min(mindp[2], mindp[3]) + c;
        mindp[2] = min(mindp[2], min(tmp1, tmp3)) + b;
    }
    
    printf("%d ", max(max(maxdp[1], maxdp[2]), maxdp[3]));
    printf("%d\n", min(min(mindp[1], mindp[2]), mindp[3]));
    return 0;
}
