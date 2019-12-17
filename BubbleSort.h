//
// Created by 张荣彦 on 2019-12-17.
//

#ifndef ARITHMETIC_BUBBLESORT_H
#define ARITHMETIC_BUBBLESORT_H


class BubbleSort {

public:
    /**
     * 执行排序
     * @param arr
     */
    void sort(int arr[],int len);
    /**
     * 执行一次冒泡
     * @param arr
     * @param start_index
     * @param end_index
     */
    void bubble(int arr[],int start_index,int end_index);
    /**
     * 交换元素
     * @param arr
     * @param target_index
     * @param replace_index
     */
    void switchItem(int arr[],int target_index,int replace_index);


};


#endif //ARITHMETIC_BUBBLESORT_H
