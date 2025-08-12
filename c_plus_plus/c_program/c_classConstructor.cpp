#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // 普通构造函数
    Person(string n, int a) : name(n), age(a) {
        cout << "Normal constructor called" << endl;
    }
    
    // 拷贝构造函数
    Person(const Person& other) : name(other.name), age(other.age) {
        cout << "Copy constructor called" << endl;
    }
    
    void show() {
        cout << "Name:" << name << ", Age:" << age << endl;
    }
};

// 接上面的Person类
void printPerson(Person p) {  // 参数是对象（按值传递）
    p.show();
}
// 主函数
int main() {
    // Person p1("Alice", 20);  // 调用普通构造函数
    // Person p2 = p1;          // 用p1初始化p2，调用拷贝构造函数
    // Person p3(p1);           // 用p1初始化p3，调用拷贝构造函数
    // p2.show();  // 输出：Name：Alice，Age：20（复制了p1的数据）
    // p3.show();  // 输出：Name：Alice，Age：20

    Person p4("Bob", 25);
    cout << "Before calling printPerson" << endl;
    printPerson(p4);  // 传递p1时，会复制一个临时对象（调用拷贝构造）
    cout << "After calling printPerson" << endl;
    return 0;
}
