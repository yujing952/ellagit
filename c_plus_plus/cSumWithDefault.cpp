# include <iostream>
using namespace std;

int sum(int a, int b = 5)
{
	int result;
	result = a + b;
	
	return result;
}



int main()
{
	int i;
	int j;
	int addSum;
	i = 3; 
	j = 7;
	
	addSum = sum(i,j);
	cout << "addSum : " << addSum << endl; 
	
	addSum = sum(i);
	cout << "addSum with default : " << addSum << endl; 
	
}

