#include <iostream>
using namespace std;

class Box
{
	public:
		double length;
		void setWidth(double wid);
		double getWidth(void);
	
	private:
		double width;
	
	protected:
		double height;	
		
};

class SmallBox:Box
{
	public:
		void setSmallHeight(double hei);
		double getSmallHeight(void);
};

//member function defination (Box)
double Box::getWidth(void)
{
	return width;
}

void Box::setWidth(double wid)
{
	width = wid;
}

//member function definition (SmallBox)
void SmallBox::setSmallHeight(double hei)
{
	height = hei;
}

double SmallBox::getSmallHeight(void)
{
	return height;
}


int main()
{
	Box box;
	
	box.length = 10.0;
	cout << "length of box: " << box.length << endl;	
	box.setWidth(5.0);
	cout << "width of box: " << box.getWidth() << endl;
	
	SmallBox smallbox;
	// use member function to set the height
	smallbox.setSmallHeight(7.0);
	cout << "height of smallbox: " << smallbox.getSmallHeight() << endl;
	return 0; 
}




