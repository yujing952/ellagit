#include <iostream>
#include <string>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<< "Base::Base()" << endl;
		}
		virtual ~Base()
		{
			cout<< "~Base::Base()" << endl;
		}
};

class Derived: public Base
{
	public:
		Derived()
		{
			cout<< "Derived::Derived()" << endl;
		}
		~Derived()
		{
			cout<< "~Derived::Derived()" << endl;
		}
};

int main()
{
	Base* bp = new Derived();
	
	Derived* dp = dynamic_cast<Derived*>(bp);
	
	cout << "bp = " << bp << endl;
	cout << "dp = " << dp << endl;
	
	Derived* dpp = new Derived();
	Base* bpp = dynamic_cast<Base*>(dpp);
	
	cout << "dpp = " << dp << endl;
	cout << "bpp = " << bp << endl;
	
	Base* bppp = new Base();
	
	Derived* dppp = dynamic_cast<Derived*>(bppp);
	
	if(dppp != NULL)
	{
		cout << "dppp = " << dppp << endl;
	}
	else
	{
		cout << "Error" << endl;
	}

	
	
	//....
	
	delete bp;

	
	
	return 0;
}
