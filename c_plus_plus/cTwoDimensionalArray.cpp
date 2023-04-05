#include <iostream>
using namespace std;


int main()
{
	int arr[3][4];
	int i,j,k;
	k = 0;
	
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 4; j++ )
		{
			arr[i][j] = k;
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
			k = k+1;

		
		}
	}
	
	return 0;
}
