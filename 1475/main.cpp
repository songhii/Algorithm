//
//  main.cpp
//  1475
//
//  Created by songhee on 2021/07/30.
//

#include <iostream>
using namespace std;

string num;
int maxi = -1, sum, set[10];

int main(int argc, const char * argv[]) {
    cin >> num;
    for(int i = 0; i < num.length(); i++) set[num[i]-'0']++;
    
    sum = set[6] + set[9];
    sum = (sum-1)/2 + 1;
    set[6] = set[9] = 0;
    set[6] = sum;
    
    for(int i = 0; i < 10; i++) {
        if(0 < set[i]) maxi = max(maxi, set[i]);
    }
    
    printf("%d\n", maxi);
    return 0;
}
