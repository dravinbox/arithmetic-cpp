#include <iostream>
#include "SelectSort.h"
#include "BubbleSort.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[] = {4,2,3,1,5};
    int len = sizeof(arr) / sizeof(arr[0]);

    //选择排序
//    SelectSort *selectSort = new SelectSort();
//    selectSort->sort(arr,len);

    //冒泡排序
    BubbleSort *bubbleSort = new BubbleSort();
    bubbleSort->sort(arr,len);


    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }


    return 0;
}