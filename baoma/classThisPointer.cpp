#include<iostream>
#include<string>
using namespace std;

class Student
{
	public:
		Student(string name, int age)
		{
			this->m_name = name;
			this->m_age = age;			
		}
		void sayHello()
		{
			cout << " i am " << this->m_name << ", " << this->m_age << " years old." << endl;
		}
		
		void show()
		{
			cout << " this = " << this << endl;
		}
		
		void setName(string name) 
		{
			this->m_name = name;
		}
	private:
		string m_name;
		int m_age;
};

int main(void)
{
	Student stu("Tom",12);
	stu.sayHello();
	stu.show();
	cout << " &stu = " << &stu << endl;
	
	stu.setName("Jerry");
	stu.sayHello();
	
	return 0;
}
