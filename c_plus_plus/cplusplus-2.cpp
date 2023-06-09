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

//ֵ���ݵķ�ʽ������������ֵ
void func(Base p)
{
	cout << "p.getX(): " << p.getX() << endl;
}

//��ֵ��ʽ���ؾֲ�����
Base func2()
{
	Base b4(3);
	const Base& rb = b4; // ���� b4����ʱ���󣬳���func2 ����,�ͻᱻ������Ϊ���ӳ���ʱ����������������÷���Base����ʱ����b4 
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
	func(b1);    //ֵ���ݵķ�ʽ������������ֵ
	
	cout << "\n----4----" << endl;
	Base b5 = func2();     //��ֵ��ʽ���ؾֲ�����
	
	cout << "\n----5----" << endl;
	Base b6 = func3(b1);   //��ֵ��ʽ���ؾֲ�����
	
	return 0;
}



