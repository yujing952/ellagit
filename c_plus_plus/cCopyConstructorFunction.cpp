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
 
 
//�β���һ��Ԫ�أ���ʱ��ʼ�������һ�ο������캯��������
void f(Location p) {
	cout << "p.GexX = " << p.GexX() << endl;
}
 
void objectplay2() {
	Location b(1, 2);
	f(b);// bʵ��ȡֵ��ʼ���β�P�Ĺ��̵��л���ÿ������캯��!!!!
}


int main()
{
	Location lt(1,2);
	f(lt);
	
	return 0;
}
