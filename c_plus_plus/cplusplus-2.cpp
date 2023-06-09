#include <iostream> 
using namespace std; 

class Base
{
	private:
		int x;
	public:
		Base():x(1)
		{	
			cout << "Base()" << endl; 	
		}
		Base(int _x)
		{ 
			x = _x;
			cout << "Base(int _x)" << endl; 
		} 
		Base(const Base& obj)
		{ 
			x = obj.x;
			cout << "Base(const Base& obj)" << endl; 
		} 
		int getX()
		{
			return x;
		}
		
}; 

//值传递的方式给函数参数传值
void func(Base p)
{
	cout << "p.getX(): " << p.getX() << endl;
}

//以值方式返回局部对象
Base func2()
{
	Base b4(3);
	const Base& rb = b4; // 由于 b4是临时对象，出了func2 函数,就会被析构，为了延长临时对象的寿命，用引用返回Base的临时对象b4 
	cout<<"&b4 = " << &b4 << endl;
	cout<<"&rb = " << &rb << endl;
	return b4;
}

Base func3(Base& tmp)
{
	cout << "tmp.getX(): " << tmp.getX() << endl;
	return tmp;

}
int main() 
{ 
	Base b1;
	cout << "\n----1----" << endl;
	Base b2 = b1; // way1: one obj to init another obj
	
	cout << "\n----2----" << endl;	
	Base b3(b2);  // way2: one obj to init another obj
	
	cout << "\n----3----" << endl;
	func(b1);    //值传递的方式给函数参数传值
	
	cout << "\n----4----" << endl;
	Base b5 = func2();     //以值方式返回局部对象
	
	cout << "\n----5----" << endl;
	Base b6 = func3(b1);   //以值方式返回局部对象
	
	return 0;
}



