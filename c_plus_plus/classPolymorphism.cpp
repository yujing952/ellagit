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
    b.fun();// call the fun() of Base class, print Base::fun()
    d.fun();// the Derived class inherits the fun() in the Base class, but the Derived class self has the fun(), which constitutes a redefinition
	// The fun() in the Base class is hidden. Therefore, print Derived::fun()
    d.Base::fun(); // if want to call the fun() in Base class, need add the class's scope qualifier, print Base::fun()
    
	cout << "use pointer to call function of object: " << endl;
	Base* pb = &b;
	Derived* pd = &d;
	pb->fun(); // call Base fun 
	pd->fun(); // call Derived fun
	
	cout << "make Base pb ointer to d (Derived object):" << endl;
	
	pb = &d;
	pb->fun(); //pb point to subclass Derived 
	
	cout << "use the reference to call function of object: " << endl;
	Base& rb = b;
	Derived rd = d;
	rb.fun(); // call Base fun 
	rd.fun(); // call Derived fun 
	
	cout << "make Base reference rb2 to d (Derived object):" << endl;
	Base& rb2 = d;
	rb2.fun();  //rd2 refer to subclass Derived

}


int main()
{
    FunTest();
    return 0;
}
