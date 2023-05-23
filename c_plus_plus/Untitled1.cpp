#include<iostream>
using namespace std;

class Human
{	protected:
		string _name;
	public:
		Human(string name="People"): _name(name)
		{
			cout << "Human constructor called" << endl;
			
		}
		Human& operator=(const Human& p)
		{
			if (this != &p)
			{
				cout << "Call Human " << endl;
				_name = p._name;
			}
			return *this;
			
		}
		virtual ~Human()
		{
			cout << "~Human()" << endl;
			
		}
	
};

class Student: public Human
{
	protected:
		int _age;
	public:
		Student(string name, int age): _age(age)
		{
			cout << "Student constructor called" << endl;
		}
		
		Student(const Student& s)
		{
			cout << "Student copy constructor called" << endl;
		}
		
		Student& operator=(const Student& s)
		{
			if(this != &s)
			{
				cout << "Call Student" << endl;
				Human::operator=(s);
				_age = s._age;
				_name = s._age;
			}
			
			return *this;
		}
		
		virtual ~Student()
		{
			cout << "~Student()" << endl;
			
		}
		
};



int main()
{
	Student st("Tom",18);
	Student st2(st);
	
	Student st3("Hello", 100);
	st = st3;
	
	
	return 0;
	
}
