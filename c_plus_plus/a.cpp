#include <iostream>

using namespace std;


void msg()
{
	const int a = 10;
	const int* p = &a;
	
	int *q;
	q = const_cast<int *>(p);
	
	*q = 20;
	
	cout << "a = "<< a << ", *p = " << *p << "*, q = " << *q << endl;
	cout << "&a = " << &a << ", p = " << p << ", q = " << q << endl;
}

const int* Search(const int* a, int n, int val)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == val)
		{
			cout << "&a[" << i << "] = " << &a[i] << endl;
			return &a[i];
		}
		
	}
	
	return NULL;
}

const int& refSearch(const int* a, int n, int val)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == val)
		{
			cout << "a[" << i << "] = " << a[i] << endl;
			return a[i];
		}		
	}
}


void test()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int val = 5;
	int *p;
	p = const_cast<int*>(Search(a,10,val));
		
	if(p == NULL)
		cout << " Not found the val in array a" << endl;
	else
		cout << "Have found the val in array a and the val = " << *p << endl;	
	
	int& q = const_cast<int &>(refSearch(a, 10, val));
	if(q == 0)
		cout << " Not found the val in array a" << endl;
	else
		cout << "Have found the val in array a and the val = " << q << endl;	
	
			
}

class Base
{
	public:
		virtual void Say()
		{
			cout << "I am Base" << endl;
		}
};

class Derived: public Base
{
	public:
		void Say()
		{
			cout << "I am Derived" << endl;
		}
};


void Show_Transfer()
{
	// up transfer
	Derived* d = new Derived;
	cout << "d: " << d << endl;
	
	Base* b = dynamic_cast<Base*> (d);
	cout << "b: " << b << endl;
	
	//down transfer
	Base* pb = new Base;
	cout << "pb: " << pb << endl;
	
	Derived* pd = dynamic_cast<Derived*>(pb);
	cout << "pd: " << pd << endl;   // actually the transfer is failed.
}


int main()
{
//	msg();
//	test();

	int x = 1;
	cout << "before, x = "  << x << endl;
	
	const int* px = &x;
//	*px = 2;
	int* py = const_cast<int*>(px);
	*py = 2;
	
	cout << "px = " << px << endl;
	cout << "py = " << py << endl;
	
	cout << "after, x = " << x << endl;
		
	return 0;
}
