//
//  main.cpp
//  1065
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, cnt = 0;
    cin >> N;
    if(N < 100)
        cout << N << endl;
    else
    {
        cnt = 99;
        for(int i = 100; i <= N; i++)
        {
            int a = i / 100;
            int b = (i/10) % 10;
            int c = i % 10;
            if(c-b == b-a)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
