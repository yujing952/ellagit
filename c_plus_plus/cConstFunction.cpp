#include <iostream>
#include<cstring>
using namespace std;


class Clock
{
	private:
		const int h;
		const int m;
		int  s;
		int x;
	public:
		Clock(int a,int b, int c):h(a),m(b),s(c)
		{
			x = 99;
			cout << "Constructor called " << endl;
		}
		
		void showTime()
		{
			cout << h << ": " << m << ": " << s << endl;
		}
		
		int getX() const
		{
			return x;
		}
};


int main()
{
	const Clock A(12,10,20);
	const Clock B(14,20,50);
//	A = B;
//	A.showTime();
	cout << A.getX() << endl;;
	
    return 0;
}
