#include <iostream>
#include "SelectSort.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[] = {4,2,3,1,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    SelectSort *selectSort = new SelectSort();
    selectSort->sort(arr,len);

    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }


    return 0;
}