#include <iostream> 
using namespace std; 
//���ࣨ���ࣩ
class A
{ 
public:
	//�鹹�캯��
	virtual void foo() 
	{ 
		cout << "A's foo()" << endl; 
		bar(); 
	} 
	//�鹹�캯��
	virtual void bar() 
	{ 
		cout << "A's bar()" << endl; 
	} 
}; 

//���ࣨ�����ࣩ
class B: public A//�����̳� 
{ 
public: 
	//��д�����й��캯��
	void foo() 
	{ 
		cout << "B's foo()" << endl; 
		A::foo(); 
	} 
	//��д�����й��캯��
	void bar() 
	{ 
		cout << "B's bar()" << endl; 
	} 
}; 
int main() 
{ 
	//��ʼ���������
	B bobj; 
	//�ø���ָ��ָ���������
	A *aptr = &bobj; 
	aptr->foo(); 


	cout<<"------"<<endl;
	A aobj = *aptr; //���³�ʼ���������
	aobj.foo(); 
		
	cout<<"------"<<endl;
	//����ָ��ָ�������,ʹ��ǿ��ת��������ȫ��һ�㲻��ʹ��
	B *bptr =(B*)new A;
	bptr->foo();
	
}

/*
//���
B's foo() //���������������й��캯���������麯����ʵ�ֶ�̬
A's foo() //�����й��캯��ֱ�ӵ��ø��๹�캯��
B's bar() //�������ֱ�ӵ��õ�ǰ����Ĺ��캯����**ע�⣬���ڵ�ǰ����Ϊ������󣬹���Ȼ�����������**
------
A's foo() //����������
A's bar()
------
A's foo() //����ʹ������ָ�룬������Ȼ�Ǹ�����󣬵��õ���Ȼ�Ǹ�������еĹ��캯��
A's bar()
*/

