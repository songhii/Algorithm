//
//  main.cpp
//  2908
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string A, B;
    char tmp;
    cin >> A >> B;
    
    tmp = A.at(2);
    A.at(2) = A.at(0);
    A.at(0) = tmp;
    
    tmp = B.at(2);
    B.at(2) = B.at(0);
    B.at(0) = tmp;
    
    printf("%d\n", stoi(A) > stoi(B) ? stoi(A) : stoi(B));
    return 0;
}
