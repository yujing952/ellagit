#include <iostream>
using namespace std;

class Test
{
	private:
		static int cCount;
	public:
		Test()
		{
			cCount++;
		}
		
		~Test()
		{
			--cCount;			
		}
		static int GetCount();
		
};

int Test::cCount = 0;
int Test::GetCount()
{
	return cCount;
}

int main(void) 
{ 
	cout << "cCount = " << Test::GetCount() << endl;
   
    Test t1;
	Test t2;
	cout << "cCount = " << t1.GetCount() << endl;
	cout << "cCount = " << t2.GetCount() << endl;	 
	
	Test *pt = new Test;
	cout << "cCount = " << pt->GetCount() << endl;	 
	
	delete pt;
	cout << "cCount = " << pt->GetCount() << endl;	
	
    return 0;
}
