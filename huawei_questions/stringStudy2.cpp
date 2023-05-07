#include <iostream>
#include <string>
using namespace std;


/*
输入时遇到空格或回车键将停止。但需要注意的是只有按下回车键时才会结束输入执行，当按下空格后还能继续输入，

但最终存到字符串中的只是第一个空格之前输入的字符串（开头的空白除外，程序会自动忽略开头的空白的），

空格操作可以用来同时对多个字符串进行初始化
*/

//如果希望在最终读入的字符串中保留空格，可以使用 getline 函数


int main(void)
{
	string s1, s2, s3;  // init en empty string
	
	//单字符串输入，读入字符串，遇到空格或回车停止 
	cin >> s1;
	
	//多字符串的输入，遇到空格代表当前字符串赋值完成，转到下个字符串赋值，回车停止 
	cin >> s2 >> s3;
	
	// cout the string
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;		
		
	return 0;
}
