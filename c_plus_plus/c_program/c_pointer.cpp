#include <iostream>
using namespace std;

int main() {
    int a = 10;  // 定义变量a，内存地址假设为0x0012ff40
    int* p = NULL;  // 定义int类型指针p
    p = &a;      // 指针p指向a的地址（&a表示取a的地址）

    int* p1 = &a; // 指针p1指向a的地址
    
    cout << "a的值：" << a << endl;       // 直接访问a：输出10
    cout << "p存储的地址：" << p << endl; // 输出a的地址：0x0012ff40
    cout << "p指向的值：" << *p << endl;  // *p表示访问p指向的变量（解引用）：输出10
    
    // 指针可以重新指向其他变量
    int b = 20;
    p = &b; 
    cout << "p重新指向后的值：" << *p << endl; // 输出20
    
    // 指针可以指向nullptr
    // p = nullptr; //C++ 11 新特性, DATA_TYPE* p = nullptr; 
    
    p = NULL; // 等价于nullptr
    // cout << *p << endl; // 运行时错误（访问空指针）
    return 0;
}