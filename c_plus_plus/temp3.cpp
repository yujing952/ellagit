#include <iostream> 
#include <string>
#include <cstring>
using namespace std; 


int main(void)
{
	/*
	char a[] = "hello";
	a[0] = 'X';
	
	for(int i = 0; i < strlen(a); i++)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
 	}
	*/
	
	char* p = (char*) "world";

	
	for(int i = 0; i < 5; i++)
	{
		cout << *(p+i) << endl;
	}
	return 0;
	
}
