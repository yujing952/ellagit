#include <iostream> 
using namespace std; 
//父类（基类）
class A
{ 
public:
	//虚构造函数
	virtual void foo() 
	{ 
		cout << "A's foo()" << endl; 
		bar(); 
	} 
	//虚构造函数
	virtual void bar() 
	{ 
		cout << "A's bar()" << endl; 
	} 
}; 

//子类（派生类）
class B: public A//公共继承 
{ 
public: 
	//重写父类中构造函数
	void foo() 
	{ 
		cout << "B's foo()" << endl; 
		A::foo(); 
	} 
	//重写父类中构造函数
	void bar() 
	{ 
		cout << "B's bar()" << endl; 
	} 
}; 
int main() 
{ 
	//初始化子类对象
	B bobj; 
	//用父类指针指向子类对象
	A *aptr = &bobj; 
	aptr->foo(); 


	cout<<"------"<<endl;
	A aobj = *aptr; //重新初始化父类对象
	aobj.foo(); 
		
	cout<<"------"<<endl;
	//子类指针指向父类对象,使用强制转换，不安全，一般不会使用
	B *bptr =(B*)new A;
	bptr->foo();
	
}

/*
//输出
B's foo() //子类对象调用子类中构造函数，利用虚函数，实现多态
A's foo() //子类中构造函数直接调用父类构造函数
B's bar() //父类对象直接调用当前对象的构造函数，**注意，由于当前对象为子类对象，故仍然调用子类对象**
------
A's foo() //父类对象调用
A's bar()
------
A's foo() //尽管使用子类指针，但是仍然是父类对象，调用的仍然是父类对象中的构造函数
A's bar()
*/

