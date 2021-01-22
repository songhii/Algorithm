//
//  main.cpp
//  2750_2
//
//  Created by songhee on 2021/01/21.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
void merge(int left, int mid, int right)
{
    vector<int> tmp(right+1);
    int L = left, R = mid+1, idx = left;
    while(L <= mid && R <= right)
    {
        if(v[L] <= v[R])
            tmp[idx++] = v[L++];
        else
            tmp[idx++] = v[R++];
    }
    
    if(L > mid) // 왼쪽 배열 다 채워넣었으면 오른쪽 배열 마저 넣고,
    {
        for(int i = R; i <= right; i++)
            tmp[idx++] = v[i];
    }
    else // 오른쪽 배열 다 채워넣었으면 왼쪽 배열 마저 넣는다
    {
        for(int i = L; i <= mid; i++)
            tmp[idx++] = v[i];
    }
    
    // 임시 배열에서 원래 배열로 복사한다
    for(int i = left; i <= right; i++)
        v[i] = tmp[i];
}

void part(int left, int right)
{
    if(left < right)
    {
        int mid = (left+right) / 2;
        part(left, mid);
        part(mid+1, right);
        merge(left, mid, right);
    }
}

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        int n; scanf("%d", &n);
        v.push_back(n);
    }
    
    part(0, N-1);
    
    for(int i = 0; i < N; i++)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}
