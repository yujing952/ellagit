#include<iostream>
using namespace std;

class A
{
	public:
		A(int n = 0):c(n)
		{
			cout << "A()" << endl;
			cout << "A::a = " << a << endl;
		}
		
		virtual ~A()
		{
			cout << "~A()" << endl;
		}
	
		static int a;
	private:
		int c;
};

int A::a = 1; // static member init

class B:public A
{
	public:
		B(int n = 0):b(n)
		{
			cout << "B::b = " << b << endl;
		}
		~B()
		{
			cout << "~B()" << endl;
		}
	
	private:
		int b;
};


int main()
{
	A x(2);
	B y(3);
	y.a = 10;
	cout << "x.a = " << x.a << endl;
	return 0;
}
