#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
	int var[MAX] = {10,100,200};
	int *ptr;
	
	cout << "ptr++" << endl;
	ptr = var;
	for(int i = 0; i < MAX; i++ )
	{
		cout << "Address of var[" << i << "] = " << ptr << endl;
		cout << "Value of var[" << i << "] = " << *ptr << endl;
		// move to next location
		ptr++;		
	}
	
	cout << "\nptr--" << endl;	
	ptr = &var[MAX-1];
	for(int i = MAX; i > 0; i-- )
	{
		cout << "Address of var[" << i << "] = " << ptr << endl;
		cout << "Value of var[" << i << "] = " << *ptr << endl;
		// move to next location
		ptr--;		
	}
	
	cout << "\nptr compare operator " << endl;
	int i = 0;
	for(ptr = var; ptr <= &var[MAX-1]; ptr++ )
	{
		cout << "Address of var[" << i << "] = " << ptr << endl;
		cout << "Value of var[" << i << "] = " << *ptr << endl;
		// move to next location
		i++;		
	}
	
	
	return 0;
}
