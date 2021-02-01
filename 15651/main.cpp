//
//  main.cpp
//  15651
//
//  Created by songhee on 2021/02/01.
//

#include <iostream>
using namespace std;

#define MAX 7+1
int N, M;
int arr[MAX];

void dfs(int x)
{
    if(x == M)
    {
        for(int i = 0; i < M; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    
    for(int i = 1; i <= N; i++)
    {
        arr[x] = i;
        dfs(x+1);
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    dfs(0);
    return 0;
}
