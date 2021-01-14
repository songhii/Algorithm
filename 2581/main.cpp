//
//  main.cpp
//  2581
//
//  Created by songhee on 2021/01/14.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int M, N, sum = 0, min = 10001;
    scanf("%d\n%d", &M, &N);
    for(int i = M; i < N+1; i++)
    {
        bool check = true;
        if(i > 1)
        {
            for(int j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                sum += i;
                if(i < min) min = i;
            }
        }
    }
    if(sum > 0)
        printf("%d\n%d\n", sum, min);
    else
        printf("-1\n");
    return 0;
}
