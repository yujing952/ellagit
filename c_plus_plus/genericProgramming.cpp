#include <iostream>
using namespace std;

template <class T>

T Add(T left, T right)
{
	return left + right;
}

template <class T>
void print()
{
	T ret = Add (3,4); 
	cout << ret << endl;
}


int main(void)
{
	cout << Add(1,2) << endl;  // T is int
	cout << Add(1.1, 2.2) << endl; // T is float
	
	cout << Add(1, (int)2.2) << endl; // T is int 强制类型转化 
	cout << Add<int>(1, 2.2) << endl; //  Display instantiation 显示实例化 
	
	print<int>();
	
	return 0;
 	  
}
