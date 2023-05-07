#include<iostream>
#include<string>
using namespace std;


class A
{
	public:
		A(int a):m_a(a)
		{
			cout << " call A constructor" << endl;
		}
	protected:
		int m_a;
};

class B:  virtual public A
{
	public:
		B(int a, int b): A(a),m_b(b)
		{
			cout << " call B constructor" << endl;
		}
		
		void display()
		{
			cout << " call B, m_a = " << this->m_a << ", m_b = " << this->m_b << endl;
		}
	protected:
		int m_b;
};

class C:  virtual public A
{
	public:
		C(int a, int c):A(a), m_c(c)
		{
			cout << " call C constructor" << endl;
		}
		
		void display()
		{
			cout << " call C, m_a = " << this->m_a << ", m_c = " << this->m_c << endl;
		}
		
	protected:
		int m_c;
};

class D: public B, public C
{
	public:
		D(int a, int b, int c, int d): A(a),B(a,b),C(a,c),m_d(d)
		{
			cout << " call D constructor" << endl;
		}
		
		void display()
		{
			cout << " call D, m_a = " << this->m_a << ", m_b = " << this->m_b << ", m_c = " << this->m_c << ", m_d = " << this->m_d << endl;
		}
		void seta (int a)
		{
			m_a = a;
		}
		void setb (int b)
		{
			m_b = b;
		}
		void setc(int c)
		{
			m_c = c;
		}
		void setd(int d)
		{
			m_d = d;
		}
		
	private:
		int m_d;
};


int main(void)
{
 //   B b(10,20);
//    b.display();
    
//    C c(30,40);
//    c.display();
    
    D d (1,2,3,4);
    d.display();
	
	return 0;
}
