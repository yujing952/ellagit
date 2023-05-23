#include <iostream>
using namespace std;

int count;

class Value
{
	private: 
		int mi;
	public:
		Value(int i)
		{
			cout << "Value(int i) i = " << i << endl;
			mi = i;
		}
		
		Value(const Value &obj)
		{
			cout << " Value(const Value &obj) i = " << obj.mi<< endl;
			mi = obj.mi;
		}
		int getI()
		{
			return mi;
		}
	
};

class Test
{
	private:
		const int ci;
		Value m2;
		Value m3;
		Value m1;
	public:
		Test():m1(1),m2(2),m3(3),ci(100)
		{
			cout << "Test::Test()" << endl;
		}
		int getCI()
		{
			return ci;
		}
		int setCI(int v)
		{
			int* p = const_cast<int*>(&ci);
			*p = v;
		}
		
};

int main()
{
	count = 5;
	
	Test t;
	cout <<  "t.ci = " << t.getCI()<< endl;
	
	t.setCI(9);	
	cout <<  "t.ci = " << t.getCI() << endl;
	
	cout << "the constructor sequence of object:" << endl;
	
	int i = 0;
	Value v1 = i;
	
	while(i < 3)
	{
		Value v2 = ++ i;
	}
	
	if (i < 4)
	{
		Value v3 = v1;
	}
	else
	{
	    Value t4 = Value(100);
	}
	return 0;
}


void write_extern()
{
	cout << "count = " << count << endl;
}
