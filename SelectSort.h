//
// Created by 张荣彦 on 2019-12-17.
//

#ifndef ARITHMETIC_SELECTSORT_H
#define ARITHMETIC_SELECTSORT_H


class SelectSort {

public:
    /**
     * 执行排序
     * @param arr
     */
    void sort(int arr[],int len);
    /**
     * 在指定的索引中求最小值的索引
     * @param arr
     * @param start_index
     * @param end_index
     * @return
     */
    int minIndex(int arr[],int start_index,int end_index);
    /**
     * 交换元素
     * @param arr
     * @param target_index
     * @param replace_index
     */
    void switchItem(int arr[],int target_index,int replace_index);


};


#endif //ARITHMETIC_SELECTSORT_H
