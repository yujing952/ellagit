#include <iostream>
using namespace std;


// reference Bjarne Stroustrup sample
class String{
public:
	explicit String(int n) {};
	String(const char *p) {};
};
 
void test_explicit();
 
 
static void test1()
{
//	String s1 = 'a'; // ���󣺲�������ʽchar->Stringת��
	String s2(10); // ���ԣ�����explicit String(int n);
	String s3 = String(10); // ���ԣ�����explicit String(int n);�ٵ���Ĭ�ϵĸ��ƹ��캯��
	String s4 = "Brian"; // ���ԣ���ʽת������String(const char *p);�ٵ���Ĭ�ϵĸ��ƹ��캯��
	String s5("Fawlty"); // ���ԣ���������String(const char *p);
}
 
static void f(String)
{
 
}
 
static String g()
{
//	f(10); // ���󣺲�������ʽint->Stringת��
	f("Arthur"); // ���ԣ���ʽת�����ȼ���f(String("Arthur"));
}
 
void test_explicit()
{
	test1();
	g();
}

int main(void)
{
	return 0;
}
