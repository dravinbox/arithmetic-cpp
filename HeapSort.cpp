//
// Created by 张荣彦 on 2019-12-17.
//

#include "HeapSort.h"
void HeapSort::swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

void HeapSort::sort(int *arr, int len) {
    for (int i = len/2 - 1; i >=0 ; i--) {
        heapfy(arr,i,len);
    }
    for (int i = len-1; i >=0 ; i--) {
        swap(&arr[0],&arr[i]);
        heapfy(arr,0,i);

    }

}

void HeapSort::heapfy(int A[], int i, int N) {
    int child;
    int tmp;

    for (tmp = A[i]; 2*i+1 < N; i = child){
        child = 2*i+1; //注意数组下标是从0开始的，所以左孩子的求发不是2*i
        if (child != N - 1 && A[child + 1] > A[child])
            ++child;                //找到最大的儿子节点
        if (tmp < A[child])
            A[i] = A[child];
        else
            break;
    }
    A[i] = tmp;



}
