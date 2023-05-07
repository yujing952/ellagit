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
	string s7(s5,3);  //s7 是从s5的下标3开始的字符copy 
	int pos = 5;
	int len = 6;
	string s8(s5, pos, len); //	s8是从 s5 的下标 pos 开始的 len 个字符的copy 
	
//	使用 = 的是拷贝初始化，使用 () 的是直接初始化。当初始值只有一个时，两者都可。当初始值有多个时一般来说要使用直接初始化，如上述最后一个的形式。
	
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;
	cout << "s6: " << s6 << endl;	
	cout << "s7: " << s7 << endl;	
	cout << "s8: " << s8 << endl;	
		
	return 0;
}
