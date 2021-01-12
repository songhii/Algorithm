//
//  main.cpp
//  10757
//
//  Created by songhee on 2021/01/12.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string A, B, X;
    cin >> A >> B;
    // 123 6789 입력 시 0123 6789로 변환해주는 과정
    int max = A.length() >= B.length() ? A.length() : B.length();
    int min = A.length() > B.length() ? B.length() : A.length();
    string L = A.length() > B.length() ? A : B;
    string S = A.length() > B.length() ? B : A;
    for(int i = 0; i < max-min; i++)
        S.insert(0, "0");
    
    int carry = 0;
    for(int i = max-1; i > -1; i--)
    {
        int sum = 0, x = (L[i]-'0')+(S[i]-'0');
        if(carry) sum++;
        if(x+sum >= 10) // 합이 10 이상일 때 올림에 수 저장
        {
            if(i > 0) // 더하는 수가 맨 앞자리가 아닐 때
            {
                sum = ((x+sum) % 10);
                carry = 1;
            }
            else // 더하는 수가 맨 앞자리 일 때 올림에 수 저장 안하고 그냥 더하기 진행
                sum = carry + x;
        }
        else // 합이 10 미만일 때 그냥 진행
        {
            carry = 0;
            sum += x;
        }
        X.insert(0, to_string(sum));
    }
    cout << X << endl;
    return 0;
}

