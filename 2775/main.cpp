//
//  main.cpp
//  2775
//
//  Created by songhee on 2021/01/08.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int T, k, n;
    scanf("%d", &T);
    for(int t = 0; t < T; t++)
    {
        int p[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        scanf("%d\n %d", &k, &n);
        for(int i = 0; i < k; i++)
        {
            int sum = 0;
            for(int j = 1; j < n+1; j++)
            {
                sum += p[j];
                p[j] = sum;
            }
        }
        printf("%d\n", p[n]);
    }
    return 0;
}
