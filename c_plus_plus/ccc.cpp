#include <iostream>
using namespace std;
 
class A
{
public:
	A(int n = 0):c(n)
	{
		cout<<"A()"<<endl;
		cout<<"A::a = "<<a<<endl;
	}

static int a ;
private:	
	int c ;
};
int A::a = 1;//静态数据成员初始化
class B:public A
{
public:
	B(int n = 0):b(n)
	{
		cout<<"B::b = "<<b<<endl;
	}
private:
	int b ;
};
 
 
int main()
{
	A x(2);
	B y(3);
	y.a = 10;
	cout<<x.a<<endl;//10 由于b可以访问基类A的静态数据成员，属于全局变量
 
	return 0;
}
