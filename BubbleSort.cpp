//
// Created by 张荣彦 on 2019-12-17.
//

#include "BubbleSort.h"

void BubbleSort::sort(int *arr,int len) {
    for (int j = len-1; j >=0 ; j--) {
        bubble(arr,0,j);
    }


}

void BubbleSort::bubble(int *arr, int start_index, int end_index) {
    for (int i = start_index; i < end_index - 1; ++i) {
        if(arr[i]>arr[i+1]){
            switchItem(arr,i,i+1);

        }

    }

}
void BubbleSort::switchItem(int *arr, int target_index, int replace_index) {
    int tmp = arr[target_index];

    arr[target_index] = arr[replace_index];

    arr[replace_index] = tmp;

}
