//
//  main.cpp
//  2588
//
//  Created by songhee on 2020/11/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int input1, input2;
    int hun, ten, one;
    int answer;
    int tmp = 100;
    
    cin >> input1 >> input2;
    
    hun = input2 / tmp * tmp;
    input2 -= hun;
    tmp /= 10;
    
    ten = input2 / tmp * tmp;
    input2 -= ten;
    tmp /= 10;
    
    one = input2 / tmp * tmp;
    input2 -= one;
    
    hun *= input1;
    ten *= input1;
    one *= input1;
    
    answer = hun + ten + one;
    hun /= 100;
    ten /= 10;
    
    cout << one << "\n" << ten << "\n" << hun << "\n" << answer << endl;
    
    return 0;
}
