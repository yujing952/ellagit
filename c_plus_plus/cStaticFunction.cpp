#include <iostream>
using namespace std;

class Demo
{
	private:
		int i;
	
	public:
		int getI();
		static void StaticFunc(const char* s);
		static void StaticSetI(Demo& d, int v);
};

int Demo::getI()
{
	return i;
}

void Demo::StaticFunc(const char* s)
{
	cout << "StaticFunc:" << s << endl;
}

void Demo::StaticSetI(Demo& d, int v)
{
	d.i = v;
}


int main()
{
	Demo::StaticFunc("main begin...");
	
	Demo d;
	Demo::StaticSetI(d,100);
	
	cout << "d.i = " << d.getI() << endl;
	Demo::StaticFunc("main end...");
	
	
	return 0;
}
