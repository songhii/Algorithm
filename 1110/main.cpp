//
//  main.cpp
//  1110
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int cycle = 0;
    int input, sum, ten, one;
    
    cin >> input;
    sum = input;
    
    while(1) {
        ten = sum / 10;
        one = sum - (ten * 10);
        
        sum = one * 10 + (ten + one) % 10;
        cycle++;
        
        if(sum == input)
            break;
    }
    
    cout << cycle << endl;
    
    return 0;
}
