#include <stdio.h>

// 比较函数：返回正数则a>b，用于排序
int compare_int(const void *a, const void *b) {
    return *(int*)a - *(int*)b; // 强转为int*后取值比较
}

// 排序函数：接收函数指针作为比较规则
void sort(void *base, int num, int size, int (*cmp)(const void*, const void*)) {
    // 简化实现：冒泡排序
    for (int i = 0; i < num-1; i++) {
        for (int j = 0; j < num-1-i; j++) {
            // 计算第j和j+1个元素的地址
            void *elem1 = (char*)base + j*size;
            void *elem2 = (char*)base + (j+1)*size;
            if (cmp(elem1, elem2) > 0) {
                // 交换元素（省略具体实现）
            }
        }
    }
}

int main() {
    int arr[] = {3,1,2};
    sort(arr, 3, sizeof(int), compare_int); // 传入比较函数
    return 0;
}