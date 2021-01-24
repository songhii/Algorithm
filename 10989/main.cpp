//
//  main.cpp
//  10989
//
//  Created by songhee on 2021/01/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    int index[10001];
    fill_n(index, 10001, 0);
    for(int i = 0; i < N; i++)
    {
        int n; scanf("%d", &n);
        index[n]++;
    }
    
    for(int i = 1; i < 10001; i++)
    {
        if(index[i] > 0)
            for(int j = 1; j <= index[i]; j++)
                printf("%d\n", i);
    }
    return 0;
}
