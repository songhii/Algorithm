//
//  main.cpp
//  1138
//
//  Created by songhee on 2021/08/13.
//

#include <iostream>
#define MAX 10+1
using namespace std;

int N;
int line[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        int move;
        scanf("%d", &move);
        for(int j = 1; j <= N; j++) {
            if(move == 0 && line[j] == 0) {
                line[j] = i;
                break;
            }
            else if(line[j] == 0) move--;
        }
    }
    for(int i = 1; i <= N; i++) {
        printf("%d ", line[i]);
    } printf("\n");
    return 0;
}
