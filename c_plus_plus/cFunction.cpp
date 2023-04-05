#include <iostream>
using namespace std;



// max function declaration
int max(int, int);

int main()
{
	int a = 2;
	int b = 4;
	int max_value;
	max_value = max(a, b);
	cout << "max_value = " << max_value << endl;
	
	return 0;
}

// max function definition
int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	
	return result;
}
