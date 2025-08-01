#include <stdio.h>

void func(int arr[]) { 
    // 此处arr实际是int*类型，sizeof(arr) = 8（64位系统指针大小）
    printf("size: %d\n", sizeof(arr)); // 输出8，而非数组实际长度
}
int main() {
    int arr[5] = {1,2,3,4,5};
    func(arr); // 传递的是&arr[0]
    return 0;
}