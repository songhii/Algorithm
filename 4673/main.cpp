//
//  main.cpp
//  4673
//
//  Created by songhee on 2021/01/05.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    bool check[10001] = {false};
    int X;
    
    for(int i = 1; i < 10001; i++)
    {
        X = i;
        if(1 <= X && X < 10) // 1의 자리
        {
            X += X;
        }
        else if(10 <= X && X < 100) // 10의 자리
        {
            int a = X / 10;
            int b = X % 10;
            X = X + a + b;
        }
        else if(100 <= X && X < 1000) // 100의 자리
        {
            int a = X / 100;
            int b = (X/10) % 10;
            int c = X % 10;
            X = X + a + b + c;
        }
        else if(1000 <= X && X < 10000) // 1000의 자리
        {
            int a = X / 1000;
            int b = (X/100) % 10;
            int c = (X/10) % 10;
            int d = X % 10;
            X = X + a + b + c + d;
        }
        if(X <= 10000)
            check[X] = true;
    }
    
    for(int i = 1; i < 10001; i++)
    {
        if(!check[i])
            cout << i << endl;
    }
    
    return 0;
}
