#include <iostream>
using namespace std;


class Location {
public:
	Location(int _x, int _y) {
		x = _x;
		y = _y;
		cout << "constructor..." << endl;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	Location(Location &obj) {
		x = obj.x + 10;
		y = obj.y + 10;
		cout << "copy constructor..." << endl;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	~Location() {
		cout << "destructor..." << endl;
	}
	int GexX() { return x; } 
	int GetY() { return y; }
private:
	int x;
	int y;
};
 
 
//形参是一个元素，此时初始化会调用一次拷贝构造函数！！！
void f(Location p) {
	cout << "p.GexX = " << p.GexX() << endl;
}
 
void objectplay2() {
	Location b(1, 2);
	f(b);// b实参取值初始化形参P的过程当中会调用拷贝构造函数!!!!
}


int main()
{
	Location lt(1,2);
	f(lt);
	
	return 0;
}
