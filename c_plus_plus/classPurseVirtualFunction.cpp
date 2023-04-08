#include <iostream>
using namespace std;

class Person
{
	public:
		virtual void Display() = 0; //pure virtual function
		
	private:
		string name; // name
};

class Student: public Person
{
	public:
		void Display()
		{
			cout << "Student" << endl;
		}
};

int main(void)
{
//	Person per;
	Student stu;
	stu.Display();
	
	return 0;
}
