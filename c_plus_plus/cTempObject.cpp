#include <iostream>
using namespace std;


class Test
{
	private:
		int mi;
	public:
		Test(int i)
		{
			cout << " Test(int i) "  << endl;
			mi = i;
		}
		Test()
		{
			cout << " Test()"  << endl;
			mi = 0;
		}
		Test(const Test &obj)
		{
			cout << " Test(const Test &obj) "  << endl;
			mi = obj.mi;
		}
		void print()
		{
			cout << "mi = " << mi << endl;
		}
		~Test()
		{
			cout << " ~Test()" << endl;
		}
};


int main()
{
	cout << "main  begian" << endl;
//	Test().print();
//	Test(100).print();

	Test t = Test(10);   // ==> Test t = 10;
		
	t.print();
	
	cout << "main  end" << endl;
	return 0;
}
