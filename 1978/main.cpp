//
//  main.cpp
//  1978
//
//  Created by songhee on 2021/01/14.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, num, cnt = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(num > 1)
        {
            bool c = true;
            for(int j = 2; j < num; j++)
            {
                if(num % j == 0)
                {
                    c = false;
                    break;
                }
            }
            if(c) cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
