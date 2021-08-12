//
//  main.cpp
//  1032
//
//  Created by songhee on 2021/08/12.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
int check[50];
vector<string> input;

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        string s; cin >> s;
        input.push_back(s);
    }
    int len = (int)input[0].length();
    for(int i = 0; i < len; i++) {
        int flag = 1;
        for(int j = 0; j < input.size()-1; j++) {
            if(input[j][i] != input[j+1][i]) {
                flag = 0;
                break;
            }
        }
        if(!flag) check[i] = 0;
        else check[i] = 1;
    }
    for(int i = 0; i < len; i++) {
        if(check[i]) cout << input[0][i];
        else cout << "?";
    }
    printf("\n");    return 0;
}
