#include<iostream>
#include<string>
using namespace std;


class Worker
{
	public:
		Worker(float salary): m_salary(salary)
		{
		//	cout << "worker constructor" << endl;
		}
		~Worker()
		{
		//	cout << "worker destructor" << endl;
		}
		
		void showInfo()
		{
			cout <<  "Worker showInfo, salary = " << this->m_salary << endl;
		}
	
	protected:	
		float m_salary;
};

class Children
{
	public:
		Children(float score): m_score(score)
		{
		//	cout << "children constructor" << endl;
		}
		
		~Children()
		{
		//	cout << "children destructor" << endl;
		}
		
		void showInfo()
		{
			cout << "Children showInfo, score = " << this->m_score << endl;
		}
	
	protected:	
		float m_score;
};

class ChildrenWorker:  public Worker, public Children
{
	public:
		ChildrenWorker(string name, float salary, float score): m_name(name),Worker(salary),Children(score)
		{
		//	cout << "ChildrenWorker constructor " << endl;
		}
		
		~ChildrenWorker()
		{
		//	cout << "ChildrenWorker destructor " << endl;
		}
		void showInfo()
		{
		//	this->showInfo();
			Worker::showInfo();
			Children::showInfo();
			//cout << " name = " << this->m_name << ", score = " << this->m_score << ", salary = " << this->m_salary << endl;
		}
	private:	
		string m_name;
};




int main(void)
{
    
    cout << "---------------" << endl;
	ChildrenWorker childworker("Jerry",8000,100);
	childworker.showInfo();
	
	return 0;
}
