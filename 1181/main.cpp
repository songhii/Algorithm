//
//  main.cpp
//  1181
//
//  Created by songhee on 2021/01/25.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2)
{
    if(s1.length() == s2.length()) return s1 < s2;
    return s1.length() < s2.length();
}

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    vector<string> v;
    for(int i = 0; i < N; i++)
    {
        string s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
