#include <iostream>

using namespace std;


class Test
{
	private:
		static int mCount;
		
	public:
		Test()
		{
			mCount++;
		}
		~Test()
		{
			--mCount;
		}
		static int GetCount();
};

int Test::mCount = 0;
int Test::GetCount()
{
	return mCount;
}

int main()
{

	cout << "count = " << Test::GetCount() << endl;
	
	Test t1;
	Test t2;
	cout << "count = " << t1.GetCount() << endl;
	cout << "count = " << t2.GetCount() << endl;
	
	Test* pt = new Test();
	cout << "count = " << pt->GetCount() << endl;
	delete pt;	
	cout << "count = " << pt->GetCount() << endl;		
	return 0;
}
