#include <iostream>
using namespace std;

class Test
{
	private:
		int mi;
		int mj;
		bool mStatus;
	
	public:
		Test(int i, int j)
		{
			mi = i;
			return;
			mj = j;	
			mStatus = true;	
		}
		int getI()
		{
			return mi;
		}
		int getJ()
		{
			return mj;
		}
		int satus()
		{
			return mStatus;
		}
};

int main()
{
	Test t1(1,2);
	
	if(t1.satus())
	{
		cout << "t1.mi = " << t1.getI() << endl;
		cout << "t1.mj = " << t1.getJ() << endl;
	}
	

	
	return 0;
}
