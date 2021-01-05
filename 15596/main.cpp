//
//  main.cpp
//  15596
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
#include <vector>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    for(int i = 0; i < a.size(); i++)
    {
        ans += a[i];
    }
    return ans;
}


int main(int argc, const char * argv[]) {
    return 0;
}
