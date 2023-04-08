#include <iostream>

using namespace std;

class Box
{
	public:
		static int objectCount;
		static int getCouont()
		{
			return objectCount;
		}
		
		// member function declaration
		Box(double l, double b, double h);
		double getVolume(void);
		friend void printVolume(Box box);	
		int compare(Box box);
		
	private:
		double length;
		double breadth;
		double height;
	
};

// Define member function
Box::Box(double l = 2.0, double b = 2.0, double h = 2.0)
{
	cout << "constructor called. " << endl;
	length = l;
	breadth = b;
	height = h;
	//everty time to create the object, the objectCount will +1
	objectCount++;
}

int Box::compare(Box box)
{
	return this->getVolume() > box.getVolume();
}
double Box::getVolume(void)
{
	return length * breadth * height;
}

// friend function, which is not the member of any class
void printVolume(Box box)
{
	cout << "voulme of box:" << box.getVolume() << endl;
	
}

// init the static number of class Box
int Box::objectCount = 0;

int main(void)
{
	// before creating object, cout the the count of object
	cout << "inital stage count:" << Box::getCouont() << endl;
	
	Box box1(3.3, 1.2, 1.5);
	Box box2(8.5, 6.0, 2.0);
	Box *ptrBox;
	
	ptrBox = &box1;
	cout << "volume of box1 (ptrBox = &box1): " <<ptrBox->getVolume() << endl;
	
	ptrBox = &box2;
	cout << "volume of box2 (ptrBox = &box2): " <<ptrBox->getVolume() << endl;
	
	
	if(box1.compare(box2))
	{
		cout << "box2 is smaller tha box1 " << endl;
		
	}
	else
	{
		cout << "box2 is equal to or larger than box1 " << endl;
		
	}
	
	cout << "final stage count: " << Box::getCouont()<< endl;	
	
	return 0;
}
