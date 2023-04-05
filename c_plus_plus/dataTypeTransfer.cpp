# include <iostream>
using namespace std;

int main()
{
	// Static Cast
	int i = 10;
	float f = static_cast<float>(i); //静态将int类型转换成float 类型 
	cout << "the transferred i value: " << i << endl; 
	
	
	//Dynamic Cast
	class Base
	{
		public:
			virtual ~Base()
			{
			}
	};
	class Derived : public Base {
	};
	
	Base* ptr_base = new Derived;
	
	// transfer the pointer of base classs to the pointer of derived class
	Derived* ptr_derived = dynamic_cast<Derived*>(ptr_base);
//	Derived* ptr_derived = static_cast<Derived*>(ptr_base);
	
	//Const Cast
	const int x = 10;
	int & r = const_cast<int&>(x);
	
	
	

	
}
