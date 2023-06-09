#include <iostream>
using namespace std;

class A
{
    public:
        A(int n = 0):aVar(n)
        {
            cout<<"A::sVar = "<< sVar << endl;
        }
        static int sVar ;
    private:
        int aVar ;
};

int A::sVar = 1; //static member initialization

class B:public A
{
    public:
        B(int n = 0):bVar(n)
        {
            cout<<"B::bVar = "<< bVar << endl;
        }
    private:
        int bVar ;
};
 
 
int main()
{
	A a(2);

    cout << "-------" << endl;
	B b(3);

    cout << "-------" << endl;
	b.sVar = 10;
	cout<< "a.sVar = " << a.sVar << endl;//10 由于b可以访问基类A的静态数据成员，属于全局变量
 
	return 0;
}