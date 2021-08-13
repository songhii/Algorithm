//
//  main.cpp
//  5635
//
//  Created by songhee on 2021/08/13.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define MAX 100
using namespace std;

int n;
vector<pair<string, int>> info;

bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
    return a.second < b.second;
}

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        string nn, dd, mm, yyyy, tmp;
        int birth;
        cin >> nn >> dd >> mm >> yyyy;
        if(mm.length() == 1) {
            mm += '0';
            char tmp = mm[0];
            mm[0] = mm[1];
            mm[1] = tmp;
        }
        if(dd.length() == 1) {
            dd += '0';
            char tmp = dd[0];
            dd[0] = dd[1];
            dd[1] = tmp;
        }
        tmp += (yyyy + mm + dd);
        birth = atoi(tmp.c_str());
        info.push_back({nn, birth});
    }
    sort(info.begin(), info.end(), cmp);
    cout << info[n-1].first << "\n" << info[0].first << endl;
    return 0;
}
