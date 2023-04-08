#include <iostream>

using namespace std;

class Line
{
	public:
		int getLength(void);
		Line( int len);     //constructor
		Line(const Line &obj); //copy constructor 
		~Line();               //destrcutor 
		
	private:
		int *ptr;
};

// member function definition constructor
Line::Line(int len)
{
	cout << "call constructor " << endl;
	// assign a memory for ptr
	ptr =  new int;
	*ptr = len;
} 

// copy constructor definition 
Line::Line(const Line &obj)
{
	cout << "call copy constructor, and also assign a memory for ptr" << endl;
	ptr = new int;
	*ptr = *obj.ptr; // copy value
	
}

//destructor 
Line::~Line(void)
{
	cout << "release memory" << endl;
	delete ptr;
}


int Line::getLength(void)
{
	return *ptr;
}

void display(Line obj)
{
	cout << "line is : " << obj.getLength() << endl;
}
int main(void)
{
	Line line1(6);
	Line line2 = line1; // here also call copy constructor
	
	
	display(line1);
	display(line2);
	
	
	return 0;
}
