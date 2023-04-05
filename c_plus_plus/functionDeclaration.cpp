#include <iostream>
using namespace std;


int func()
{
	cout << "Hello,\t world, function declaration and definition\n\n" << endl;
	return 0;
	
}

class MyClass{
	public:
		static int class_var; //class variable
};

int MyClass::class_var = 30;


int func();

//global variable declaration
int g = 20;


#define LENGTH 2
#define WIDTH 3
#define NEWLINE '\n'


int main()
{
	int i = func();
	// local variable declaration
	int g = 10;
	{
		//Block variable declaration
		int g = 5;
		cout << "Block variable g = " << g << endl;
	}
	
	cout << "Local variable g = " << g << endl;
	
	cout << "Class variable class_var: " << MyClass::class_var << endl;
	
	int area;
	area = LENGTH * WIDTH;
	cout << "area = " << area <<NEWLINE;
	
	const int LENGTH1 = 4;
	const int WIDTH1 = 6;
	int area_1;
	area_1 = LENGTH1 * WIDTH1;
	cout << "area_1 = " << area_1 << endl;
	
	return 0;
	
}







