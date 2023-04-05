#include <iostream>
#include <assert.h>
using namespace std;

class A
{
	public:
		int a;
		int a1;
		
		A()
		{
			a1 = 1; a2 = 2; a3 = 3; a = 4;
		}
		void fun()
		{
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			cout << a3 << endl;
		}
	
	protected:
		int a2;
	private:
		int a3;

};

class B: public A
{
	public:
		int a;
	
		B(int i)
		{
			A();
			a = i;
		}
		void fun()
		{
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			//cout << a3 << endl; // Error: the private member of base class A cannot be accessed by derived class B 
				
		}	
};

int main()
{
	B b(10);
	cout << b.a << endl;
	cout << b.a1 << endl;
	//cout << b.a2 << endl; // Error: 类外不能访问protected 变量 
	//cout << b.a3 << endl; // Error: 类外不能访问private变量 
	system("pause");
	return 0;
	
}

