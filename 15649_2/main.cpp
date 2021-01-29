//
//  main.cpp
//  15649_2
//
//  Created by songhee on 2021/01/29.
//

#include <iostream>
using namespace std;

#define MAX 8+1
int N, M;
int arr[MAX], visited[MAX];

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
        if(!visited[i])
        {
            visited[i] = 1;
            arr[x] = i;
            dfs(x+1);
            visited[i] = 0;
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    dfs(0);
    return 0;
}
