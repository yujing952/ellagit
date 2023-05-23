#include <iostream> 
#include <string>
using namespace std;


class Parent
{
	public:
		int mi;
		void add(int v)
		{
			mi += v;
		}
		void add(int a, int b)
		{
			mi += (a + b);
		}
		virtual void print()
		{
			cout << "i am Parent" << endl;
		}

};

class Child: public Parent
{
	public:
		int mv;
		void add(int x, int y, int z)
		{
			mv += (x + y + z);
		}

		void print()
		{
			cout << "i am Child" << endl;
		}

	
};

void how_to_print(Parent* p)
{
	p->print();
}
	
int main(void)
{
	Parent p;
	Child c;

	how_to_print(&p);
	how_to_print(&c);

	
	return 0;
	
}
