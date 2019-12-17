//
// Created by 张荣彦 on 2019-12-17.
//

#ifndef ARITHMETIC_HEAPSORT_H
#define ARITHMETIC_HEAPSORT_H


class HeapSort {

public:
    /**
     * 执行排序
     * @param arr
     * @param len
     */
    void sort(int arr[],int len);

    void heapfy(int arr[],int root,int len);

    void swap(int* a, int* b);

};


#endif //ARITHMETIC_HEAPSORT_H
