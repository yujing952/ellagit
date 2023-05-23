#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		string name;
};

class B : virtual public A
{
	public:
		int age;
};

class C: virtual public A
{
	public:
		string sex;
};

class D: public B, public C
{
	public:
		int id;
};

int main()
{
	D stu;
	stu.name = "Lucky";
	stu.age = 10;
	stu.sex = "girl";
	stu.id = 666;
	
	
	return 0;
	
}
