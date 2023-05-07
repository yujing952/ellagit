#include<iostream>
#include<string>
using namespace std;


class Person
{
	public:
		Person(string name, int age)
		{
		//	cout << "Person constructor called" << endl;
			this->m_name = name;
			this->m_age = age;
		}
		virtual ~Person()
		{
			cout << "Person destructor called" << endl;
		}
		
		virtual void showInfo()
		{
			cout << "Person name = " << this->m_name << ", age = " << this->m_age << endl;
		}

	protected:
		string m_name;
		int m_age;
		
};

class Student: public Person
{
	
	public:
		Student(string name, int age, float score): Person(name,age),m_score(score)
		{
		//	cout << "Student constructor called" << endl;
		}
		virtual ~Student()
		{
			cout << "Student destructor called" << endl;
		}
		
		virtual void showInfo() 
		{
			cout << "Student name =  " << this->m_name << " , age = "  <<this->m_age <<", score = " << this->m_score << endl;
		}
		
	protected:
		float m_score;
	
};

class HighSchoolStudent: public Student
{
	public:
		HighSchoolStudent(string name,int age, float score): Student(name, age, score)
		{
		//	cout << "HighSchoolStudent constructor called" << endl;
		}
		
		void showInfo() 
		{
			cout << "HighSchoolStudent name =  " << this->m_name << " , age = "  <<this->m_age <<", score = " << this->m_score << endl;
		}
		~HighSchoolStudent()
		{
			cout << "HighSchoolStudent destructor called" << endl;
		}
};

int main(void)
{
	Person *p  = new Person("Tom", 6);
	p->showInfo();
	
    cout << "\n------base pointer point to derived class Student---------" << endl;	
    
	p = new Student("Jerry", 8, 100);
	p->showInfo();
	
	cout << "\n------base pointer point to derived class HighSchoolStudent---------" << endl;	
	p = new HighSchoolStudent("Ella",40,99);
	p->showInfo();
	
	cout << "\n-------reference--------" << endl;
/*	
	Person person("lucky",2);
	Student student("good",4,120);
	
	Person &rp = person;
	rp.showInfo();
	
	Person &rs = student;
	rs.showInfo();
*/	
	delete p;
	
	return 0;
}
