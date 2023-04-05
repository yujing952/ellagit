# include <iostream>
using namespace std;

void func(void);

static int count = 10; //global variable

void func(void)
{
	static int i = 5; // static local variable
	i++;
	cout << "the variable i: " << i ;
	cout << ", variable count: " <<  count << endl;	
}

int main()
{
	while (count--)
	{
		func();
	}
	
 	return 0;
}


