//
//  main.cpp
//  7568
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, n; scanf("%d", &N);
    int vx[50], vy[50]; fill_n(vx, 50, 0); fill_n(vy, 50, 0);
    int r[200]; fill_n(r, 200, 0);
    
    for(int i = 0; i < N; i++)
        scanf("%d %d", &vx[i], &vy[i]);
    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(vx[i] < vx[j] && vy[i] < vy[j]) r[i]++;
            else if(vx[i] > vx[j] && vy[i] > vy[j]) r[j]++;
        }
        r[i]++;
    }
    for(int i = 0; i < N; i++)
        printf("%d ", r[i]);
    printf("\n");
    return 0;
}
