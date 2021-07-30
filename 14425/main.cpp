//
//  main.cpp
//  14425
//
//  Created by songhee on 2021/07/30.
//

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int N, M, cnt;
vector<string> I;
unordered_set<string> set;

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        set.insert(input);
    }
    for(int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        I.push_back(input);
    }
    
    for(int i = 0; i < M; i++)
        if(set.find(I[i]) != set.end()) cnt++;
    printf("%d\n", cnt);
    return 0;
}
