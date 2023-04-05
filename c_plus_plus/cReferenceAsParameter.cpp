#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main()
{
	// declare local variable
	int a = 100;
	int b = 200;
	
	cout << " before swap, a value: " << a << endl;
	cout << " before swap, b value: " << b << endl;
	
	swap(a,b);
	
	cout << " after swap, a value: " << a << endl;
	cout << " after swap, b value: " << b << endl;
	
	return 0;
}


//define swap function
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
