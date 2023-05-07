#include <iostream>
using namespace std;


class Test
{
	private:
		int a;
		int b;
	public:
		Test()
		{
			cout << "constructor without parameters" << endl;
		}
		
		Test(int va, int vb): a(va), b(vb)
		{
			cout << "constructor with parameters" << endl;
		}
		
		Test(const Test &obj)
		{
			a = obj.a;
			b = obj.b;
			cout << "copy constructor"  << endl;			
		}
		void showValue()
		{
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
		}
		int getA()
		{
			return a;
		}
		int getB()
		{
			return b;
		}
		~Test()
		{
			cout << "Destructor ~Test()" << endl;
		}
};

void getClassValue( Test p )
{
//	cout << "p.getA = " << p.getA()<< endl;
//	cout << "p.getB = " << p.getB()<< endl;
	p.showValue();
}

// retrun ÄäÃû object 
Test ret()
{
	static Test r(10,20);   // need set "static" type classs object
	return r;
}

Test ret1()
{
	Test *p = new Test(4,5);   // use class pointer to point the new temp object,and retrun
	return *p;
}
 

int main(void)
{

	Test t(1,2);     	// call constructor 
	t.showValue();

	Test t1 = t;  	// call copy constructor when using a object to init another object of the same class
	t1.showValue();

	Test t2(t1);     // call copy constructor when using a object to init another object of the same class
	t2.showValue();
	
	getClassValue(t2); // call copy constructor when class object as a parameter of function
	
/*	
	Test t4 = ret();   // call copy constructor when returnning a class object (ÄäÃûobj)
	t4.showValue();

    Test t5 = ret1(); // call copy constructor 
    t5.showValue();

*/
	
		
	return 0;
}
