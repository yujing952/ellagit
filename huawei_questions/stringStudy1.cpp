#include <iostream>
#include <string>
using namespace std;



int main(void)
{
	string s1;
	string s2 = s1;
	string s3(s2);
	string s4 = "hello world";
	string s5("hello becautiful world"); 
	string s6(10,'a');
	string s7(s5,3);  //s7 �Ǵ�s5���±�3��ʼ���ַ�copy 
	int pos = 5;
	int len = 6;
	string s8(s5, pos, len); //	s8�Ǵ� s5 ���±� pos ��ʼ�� len ���ַ���copy 
	
//	ʹ�� = ���ǿ�����ʼ����ʹ�� () ����ֱ�ӳ�ʼ��������ʼֵֻ��һ��ʱ�����߶��ɡ�����ʼֵ�ж��ʱһ����˵Ҫʹ��ֱ�ӳ�ʼ�������������һ������ʽ��
	
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;
	cout << "s6: " << s6 << endl;	
	cout << "s7: " << s7 << endl;	
	cout << "s8: " << s8 << endl;	
		
	return 0;
}
