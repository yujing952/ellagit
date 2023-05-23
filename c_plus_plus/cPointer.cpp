#include<iostream>
using namespace std;

#include<math.h>

class Pointer
{
	private:
		double x;
		double y;
	public:
		Pointer(double x, double y)
		{
			this->x = x;
			this->y = y;
		}
		
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		
		friend double func(Pointer& p1, Pointer& p2);
};

double func(Pointer& p1, Pointer& p2)
{
	double ret = 0;
	ret = (p2.y- p1.y)*(p2.y - p1.y) + (p2.x - p1.x)*(p2.x - p1.x);
	ret = sqrt(ret);
	return ret;
	
}



int main(void)
{
	Pointer p1(1,2);
	Pointer p2(10,20);
	
	cout << "[p1,p2] = " << func(p1,p2) << endl;
	
	return 0;
	
}


