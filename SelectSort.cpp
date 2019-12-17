//
// Created by 张荣彦 on 2019-12-17.
//

#include <iostream>
#include "SelectSort.h"

void SelectSort::switchItem(int *arr, int target_index, int replace_index) {
    int tmp = arr[target_index];

    arr[target_index] = arr[replace_index];

    arr[replace_index] = tmp;

}

void SelectSort::sort(int *arr,int len) {
    for (int i = 0; i < len-1; ++i) {
        int one_min_index = minIndex(arr,i,len-1);
        switchItem(arr,i,one_min_index);
    }

}

int SelectSort::minIndex(int *arr, int start_index, int end_index) {
    int min_index = start_index;
    for (int i = start_index; i <= end_index; ++i) {
        if(arr[i]<arr[min_index]){
            min_index = i;
        }
    }
    return min_index;
}
