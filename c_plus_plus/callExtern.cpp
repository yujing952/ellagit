#include <iostream>

int count;
extern void write_extern();

int main()
{
	count = 5;
	void write_extern();
	
	return 0;
}
