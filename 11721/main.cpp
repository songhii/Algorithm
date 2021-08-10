//
//  main.cpp
//  11721
//
//  Created by songhee on 2021/08/10.
//

#include <iostream>
#include <string>
using namespace std;

string s;

int main(int argc, const char * argv[]) {
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        cout << s[i];
        if(i % 10 == 9) printf("\n");
    }
    printf("\n");
    return 0;
}
