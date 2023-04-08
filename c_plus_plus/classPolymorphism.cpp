#include <iostream>
using namespace std;


class Base
{
public:
    virtual void fun()
    {
        cout << "Base::fun()" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
      cout << "Derived::fun()" << endl;
    }

};

void FunTest()
{
    Base b;
    Derived d;
    
    cout << "use the object to call matched fun: " << endl;
    b.fun();//调用基类的fun()打印Base::fun()
    d.fun();//子类虽然继承了基类的fun()但是子类本身中fun(),此时构成了重定义，即基类中的fun()被隐藏，因此调用的是子类的fun()打印Derived::fun()
    d.Base::fun();//若想调用基类的fun()需要加类的作用域限定符，打印Base::fun()
    
	cout << "use pointer to call function of object: " << endl;
	Base* pb = &b;
	Derived* pd = &d;
	pb->fun(); // call Base fun 
	pd->fun(); // call Derived fun
	
	cout << "make Base pb ointer to d (Derived object):" << endl;
	
	pb = &d;
	pb->fun(); //pb指向子类
	
	cout << "use the reference to call function of object: " << endl;
	Base& rb = b;
	Derived rd = d;
	rb.fun(); // call Base fun 
	rd.fun(); // call Derived fun 
	
	cout << "make Base reference rb2 to d (Derived object):" << endl;
	Base& rb2 = d;
	rb2.fun();  //rd2引用子类 

}


int main()
{
    FunTest();
    return 0;
}
