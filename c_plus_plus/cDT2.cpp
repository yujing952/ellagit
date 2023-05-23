#include <iostream>
#include <string>
using namespace std;

class BaseA
{
	int ma;
	public:
		BaseA( int a)
		{
			ma = a;
		}
		int getA()
		{
			return ma;
		}
		
};

class BaseB
{
		int mb;
	public:
		BaseB( int b)
		{
			mb = b;
		}
		int getB()
		{
			return mb;
		}
	
};

class Derived: public BaseA, public BaseB
{
	int mc;
	public:
		Derived(int a, int b, int c): BaseA(a),BaseB(b)
		{	
			mc = c;	
		}
		int getC()
		{
			return mc;
		}
		void print()
		{
			
		}	
};


int main()
{
	Derived d (1,2,3);
	BaseA* pa = &d;
	BaseB* pb = &d;
	
	cout << " pa = " << pa << endl;
	cout << " pb = " << pb << endl;
	
	
	return 0;
}
