//
// Created by 张荣彦 on 2019-12-17.
//

#include "InsertionSort.h"

void InsertionSort::sort(int *arr, int len) {
    for (int i = 0; i < len-1; ++i) {
        insert(arr,0,i,i+1);

    }

}

void InsertionSort::insert(int *arr, int start_index, int end_index, int target_index) {
    for (int i = end_index; i >=start_index ; --i) {
        if(arr[target_index]<arr[i]){
            switchItem(arr,i,target_index);
            target_index = i;
        }else{
            break;
        }

    }

}
void InsertionSort::switchItem(int *arr, int target_index, int replace_index) {
    int tmp = arr[target_index];

    arr[target_index] = arr[replace_index];

    arr[replace_index] = tmp;

}
