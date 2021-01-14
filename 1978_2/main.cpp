//
//  main.cpp
//  1978_2
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
        bool check = true;
        scanf("%d", &num);
        if(num > 1)
        {
            for(int j = 2; j * j <= num; j++)
            {
                if(num % j == 0)
                {
                    check = false;
                    break;
                }
            }
            if(check) cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
