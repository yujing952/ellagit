#include <iostream>
using namespace std;
int main() {
    char str[] = "hello";
    char* p = str;  // 指针指向字符串首地址

    while (*p != '\0') {  // 遍历字符串
        cout << *p;  // 输出h e l l o
        p++;  // 指针偏移（指向 next 字符）
    }
    return 0;
}