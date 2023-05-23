#include <iostream>
#include <string>
using namespace std;
class BaseA
{
	public:
		virtual void funcA()
		{
			cout << "BaseA::funcA()" << endl;
		}
		
};

class BaseB
{
	public:
		virtual void funcB()
		{
			cout << "BaseB::funcB()" << endl;
		}
	
};

class Derived: public BaseA, public BaseB
{

};


int main()
{
	Derived d;
	BaseA* pa = &d;
	BaseB* pb = &d;
	
	cout << "sizeof(d) = " << sizeof(d) << endl;
	cout << "using pa to call funcA() ..." << endl;
	pa->funcA();
	
	cout << "using pb to call funcB() ..." << endl;
	pb->funcB();
	
	BaseB* pbb = dynamic_cast<BaseB*> (pa);
	cout << "using pbb to call funcB() ..."  << endl;
	pbb->funcB(); 
	cout << "pa = " << pa << endl;
	cout << "pb = " << pb << endl;
	cout << "pbb = " << pbb << endl;
	
	
	
	return 0;
}
