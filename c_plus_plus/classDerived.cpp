#include <iostream>

using namespace std;

//base class Shape
class Shape
{
	public:
		void setWidth(int w)
		{
			width = w;	
		}	
		void setHeight(int h)
		{
			height = h;
		}
	
	protected:
		int width;
		int height;
		
};

//base class PaintCost
class PaintCost
{
	public:
		int getCost(int area)
		{
			return (area * 70);
		}
};

// derived class
class Rectangle: public Shape, public PaintCost
{
	public:
		int getArea()
		{
			return (width * height);
		}
};

class printData
{
	public:
		void print(int i)
		{
			cout << "the int data: " << i << endl;
		}
		
		void print(float f)
		{
			cout << "the float data: " << f << endl;
		}
		
		void print(char c[])
		{
			cout << "the string data: " << c << endl;
		}
};

int main(void)
{
	Rectangle rect;
	int area;
	
	rect.setWidth(3);
	rect.setHeight(4);	
	area = rect.getArea();
	
	// cout the area of object
	cout << "total area: " << rect.getArea() << endl;	
	// cout the whole cost
	cout << "total paint cost: " << rect.getCost(area) << endl;
	
	printData pd;
	float x = 4.52;
	int y = 5;
	pd.print(y);
	pd.print(x);
	char c[] = "hello c++";
	pd.print(c);
	
	
	return 0;
}
