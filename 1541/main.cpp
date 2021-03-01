//
//  main.cpp
//  1541
//
//  Created by songhee on 2021/03/01.
//

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

string input, n;
int bracket = -1, sum = 0;
vector<int> num, oper;

int main(int argc, const char * argv[]) {
    cin >> input;
    for(int i = 0; i < input.length(); i++)
    {
        if(48 <= input[i] && input[i] <= 57) n += input[i];
        else
        {
            num.push_back(stoi(n.c_str()));
            if(input[i] == 43) oper.push_back(1);
            else oper.push_back(-1);
            n.clear();
        }
    } num.push_back(stoi(n.c_str()));
    
    for(int i = 0; i < oper.size(); i++)
    {
        if(oper[i] == -1)
        {
            bracket = i+1;
            break;
        }
    }
    
    if(-1 < bracket)
    {
        for(int i = bracket; i <= num.size()-1; i++)
        {
            if(i == bracket) num[i] *= -1;
            num[i+1] = num[i] - num[i+1];
        } num[bracket] = num[num.size()-1];
        
        for(int i = 0; i <= bracket; i++) sum += num[i];
    }
    else for(int i = 0; i < num.size(); i++) sum += num[i];
    
    printf("%d\n", sum);
    return 0;
}
