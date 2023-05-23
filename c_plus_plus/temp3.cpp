#include <iostream> 
#include <string>

using namespace std; 

class Object
{
	private:
		string ms;
	public:
		Object(string s)
		{
			cout << "Object(string s): "  << s << endl;
			ms = s;
		}
		~Object()
		{
			cout << "~Object(): " << ms << endl;
		}
};

class Parent: public Object
{
	private:
		string ms;
	public:
		Parent(): Object("Default")
		{
			cout << "Parent()" << endl;
			ms = "Default";
		 } 
		Parent(string s): Object(s)
		{
			cout << "Parent(string s): " << ms << endl;
			ms = s;
		}
		~Parent()
		{
			cout << "~Parent(): " << ms << endl;
		}

	
};

class Child: public Parent
{
	Object m01;
	Object m02;
	string ms;
	public:
		Child():m01("Default 1"),m02("Default 2")
		{
			cout << "Child() " << endl;
			ms = "Default";
		}
		Child(string s):Parent(s),m01(s + " 1"),m02(s + " 2")
		{
			cout << "Child(string s): " << s << endl;
			ms = s;
		}
		~Child()
		{
			cout << "~Child(): " << ms << endl;
		}

};
	
int main(void)
{
	
	Child cc("cc");
	cout << endl;
	
	return 0;
	
}
