#include <stdio.h>

// 函数声明
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("The array before sorting: \n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("The array after sorting: \n");
    printArray(arr, n);
    
    return 0;
}

// 冒泡排序函数
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        // 提前退出标志位
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // 如果没有发生交换，提前退出
        if (swapped == 0) {
            break;
        }
    }
}

// 打印数组函数
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}