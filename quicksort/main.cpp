//
//  main.cpp
//  quicksort
//
//  Created by songhee on 2021/01/26.
//

#include <iostream>

int list[9] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

void swap(int x, int y)
{
    int tmp = list[x];
    list[x] = list[y];
    list[y] = tmp;
}

int part(int left, int right)
{
    int low = left+1, high = right, pivot = list[left];
    while(low < high)
    {
        while(low <= right && pivot > list[low])  low++;
        while(high >= left && pivot < list[high]) high--;
        if(low < high) swap(low, high);
    }
    swap(left, high);
    
    return high;
}

void quick_sort(int left, int right)
{
    if(left < right)
    {
        int q = part(left, right);
        quick_sort(left, q-1);
        quick_sort(q+1, right);
    }
}

int main(int argc, const char * argv[]) {
    quick_sort(0, 8);
    for(int i = 0; i < 9; i++)
        printf("%d ", list[i]);
    printf("\n");
    return 0;
}
