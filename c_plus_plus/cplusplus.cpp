#include <iostream>
using namespace std;
 
class Base
{
private:
    int m;
public:
    Base(){ m = 1; }
    virtual ~Base(){}
    void func()
    {
        cout<<"Base::func() "<< m << endl;
    }
};
 
class Derived: public Base
{
private:
    int m;
public:
    Derived(){ m = 2; }
    virtual ~Derived(){}
    void func()
    {
        cout<<"Derived::func() "<< m << endl;
    }
};
 
int main()
{
	// Base pointer point to Derived object, it's safe
	Base* pb = new Derived;
	if(pd != 0)
	{
		pb->func();
	}
	
	// Derived pointer point to Base object, it's not safe, and easy to lead memory leak.
	//Derived* pd = new Base; // complie error
	Derived* pd = dynamic_cast<Derived*>(new Base);
	cout << "pd = " << pd << endl;
	if(pd != 0)
	{
			pd->func();		
	}

    
    return 0;
}
