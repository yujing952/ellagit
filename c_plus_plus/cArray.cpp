#include <iostream>
#include <iomanip>

using namespace std;
//using std::setw;

int main()
{
	int arr[10];
	int i;
	
	cout << "arr[10]: " << endl;
	for(i=0; i<10; i++)
	{
		arr[i] = i + 100 ;
	}
		
	cout << "Element" << setw( 13 ) << "Value" << endl;
	for (i=0; i<10; i++)
	{
		cout << setw(5) << i << setw( 13 ) << arr[i] << endl;
	}
	
	
	return 0;
	
}
