//
//  main.cpp
//  1427
//
//  Created by songhee on 2021/01/25.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string str; cin >> str;
    sort(str.rbegin(), str.rend());
    cout << str << endl;
    return 0;
}
