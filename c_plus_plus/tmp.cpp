#include<iostream>
 using namespace std;
 
 class Base
 {
 	public:
 		virtual void fun()
 		{
 			cout << "Base:: fun()" << endl;	
		}
 };
 
 class Derived: public Base
 {
 	public:
 		
 		void fun()
 		{
 			cout << "Derived:: fun()" << endl;	
		}
		
 };
 
 


int main(void)
{	
	Base b;
	Derived d;
	
	Base *pb = &b;
	Derived *pd = &d;
	
	pb->fun();
	pd->fun();
	
	cout << "Base pointer to point the Derived object" << endl;
	pb = &d;
	pb->fun();

	cout << "Use reference to check:" << endl;	
	Base &rb = b;
	Derived &rd = d;
	
	rb.fun();
	rd.fun();
	
	Base &rbb = d;
	rbb.fun();

	// this is not security,it's not suggested
	cout << "Use 'Type Cast' and make Derived pointer to point Base object b" << endl; 
	Derived *dptr =(Derived*) &b;
	dptr->fun();
	
	return 0;
}
