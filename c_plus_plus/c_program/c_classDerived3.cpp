#include <iostream> 
using namespace std; 

//Base class
class Base
{ 
public:
    //virtual func
    virtual void func() 
    { 
        cout << "Base's func()" << endl; 
        print(); 
    } 
    //virtual print
    virtual void print() 
    { 
        cout << "Base's print()" << endl; 
    } 
}; 

//Derived class
class Derived: public Base
{ 
public: 
    //override the func in Base class
    void func() 
    { 
        cout << "Derived's func()" << endl; 
        Base::func(); 
    } 
    //override the print in Base class
    void print() 
    { 
        cout << "Derived's print()" << endl; 
    } 
}; 
int main() 
{ 
    Derived d; 
    //Base pointer point to Derived object
    Base* pb = &d; 
    pb->func(); 
    
    cout<<"------"<<endl;    
    Base b = *pb; //重新初始化父类对象
    b.func(); 
    
    cout<<"------"<<endl;
    //子类指针指向父类对象,使用强制转换，不安全，容易内存泄漏，一般不会使用
    Derived* bpt = (Derived*) new Base;  //这种强制类型转换不推荐，建议使用下面注释中的强制类型形式
    bpt->func();

}

/*
Output result:

Derived's func()  //子类对象调用子类函数，利用虚函数，实现多态
Base's func()     //子类函数直接调用父类函数
Derived's print() //父类对象直接调用当前对象的函数，由于当前对象为子类对象，故仍然调用子类对象
------
Base's func()    //父类对象调用
Base's print()
------
Base's func()    //尽管使用子类指针，但是仍然是父类对象，调用的仍然是父类对象中的函数
Base's print()   //因容易内存泄漏，所以C++编译器这样处理相对也是安全的
*/