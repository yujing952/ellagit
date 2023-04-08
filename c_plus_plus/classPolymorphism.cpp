#include <iostream>
using namespace std;


class Base
{
public:
    virtual void fun()
    {
        cout << "Base::fun()" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
      cout << "Derived::fun()" << endl;
    }

};

void FunTest()
{
    Base b;
    Derived d;
    
    cout << "use the object to call matched fun: " << endl;
    b.fun();//���û����fun()��ӡBase::fun()
    d.fun();//������Ȼ�̳��˻����fun()�������౾����fun(),��ʱ�������ض��壬�������е�fun()�����أ���˵��õ��������fun()��ӡDerived::fun()
    d.Base::fun();//������û����fun()��Ҫ������������޶�������ӡBase::fun()
    
	cout << "use pointer to call function of object: " << endl;
	Base* pb = &b;
	Derived* pd = &d;
	pb->fun(); // call Base fun 
	pd->fun(); // call Derived fun
	
	cout << "make Base pb ointer to d (Derived object):" << endl;
	
	pb = &d;
	pb->fun(); //pbָ������
	
	cout << "use the reference to call function of object: " << endl;
	Base& rb = b;
	Derived rd = d;
	rb.fun(); // call Base fun 
	rd.fun(); // call Derived fun 
	
	cout << "make Base reference rb2 to d (Derived object):" << endl;
	Base& rb2 = d;
	rb2.fun();  //rd2�������� 

}


int main()
{
    FunTest();
    return 0;
}
