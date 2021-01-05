//
//  main.cpp
//  4673_2
//
//  Created by songhee on 2021/01/05.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    bool check[10001] = {false};
    int X, tmp;
    
    for(int i = 1; i < 10001; i++)
    {
        X = i; tmp = i;
        while(tmp != 0)
        {
            X += tmp % 10;
            tmp /= 10;
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
