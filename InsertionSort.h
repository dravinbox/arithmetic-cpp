//
// Created by 张荣彦 on 2019-12-17.
//

#ifndef ARITHMETIC_INSERTIONSORT_H
#define ARITHMETIC_INSERTIONSORT_H


class InsertionSort {
public:
    /**
     * 执行排序
     * @param arr
     * @param len
     */
    void sort(int arr[],int len);
    /**
     * 执行一次插入
     * @param arr
     * @param start_index
     * @param end_index
     * @param target_index
     */
    void insert(int arr[],int start_index, int end_index,int target_index);
    /**
     * 交换元素
     * @param arr
     * @param target_index
     * @param replace_index
     */
    void switchItem(int arr[],int target_index,int replace_index);

};


#endif //ARITHMETIC_INSERTIONSORT_H
