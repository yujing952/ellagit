#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double breadth;
		double height;
		
		// member function declaration
		double getVolume(void);
		void set(double len, double bre, double hei);
	
};

// Define member function
double Box::getVolume()
{
	return length * breadth * height;
}

void Box::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	height = hei;
}

int main()
{
	Box box1;
	Box box2;
	double volume = 0.0;
	
	// box1 information
	box1.length = 3.0;
	box1.breadth = 2.0;
	box1.height = 1.0;
	
	box2.length = 4.0;
	box2.breadth = 5.0;
	box2.height = 6.0;
	
	// box1 volume
	volume = box1.length * box1.breadth * box1.height;
	cout << "box1 volume: " << volume << endl;
	
	box2.set(4.0, 5.0, 6.0);
	volume = box2.getVolume();
	cout << "box2 volume: " << volume << endl;
	
	
	return 0;
}
