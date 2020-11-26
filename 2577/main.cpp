//
//  main.cpp
//  2577
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B, C, ans;
    vector<int> count(10, 0);
    int tmp = 100000000;
    
    cin >> A >> B >> C;
    ans = A * B * C;
    
    while(1) {
        if(1 <= ans/tmp && ans/tmp < 10)
            break;
        tmp /= 10;
    }
  
    int n = 1;
    int tmp2 = tmp;
    while(1) {
        if(tmp2 == 1)
            break;
        tmp2 /= 10;
        n++;
    }
    count[0] = n;
    
    int first;
    while(1) {
        if(ans == 0)
            break;
        first = ans / tmp;
        count[first]++;
        count[0]--;
        ans -= tmp * first;
        tmp /= 10;
    }
    
    for(int i = 0; i < count.size(); i++)
        cout << count[i] << endl;
    
    return 0;
}
