#include<iostream>
#include<string>
using namespace std;


class Student
{
	public:
		static string course;
		static void sayHello();
				
		Student(string name, int age); //Contructor with parameters
		~Student();
		void setAge(int age);
			
	private:
		const string myName;
		int myAge;
		
};

string Student::course = "C++ programming";


void Student::setAge(int age)
{
	myAge = age;
}


Student::Student(string name, int age):myName(name),myAge(age)
{
	cout << "constructor  called" << endl;
}

Student::~Student()
{
	cout <<  "destructor called ~ Student" << endl;
}
void Student::sayHello()
{
	cout << "Hello, i am a student, i am learning: " << course << endl;
}


int main(void)
{	
	Student stu("Cat",11);
	stu.sayHello();
	
	Student stu1("Tom",12);
	
	return 0;
	
}
