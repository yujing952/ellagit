#include <iostream>
using namespace std;

extern int count;

void write_extern(void)
{
	cout << "count is " << count << endl;
}
