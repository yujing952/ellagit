#include <iostream>
#include <string>
#include <algorithm>   // reverse included
#include <vector>
#include <iterator>
#include <cctype>  
#include <stdlib.h>
using namespace std;

/*
描述
输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；

长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

输入描述：
连续输入字符串(每个字符串长度小于等于100)

输出描述：
依次输出所有分割后的长度为8的新字符串


示例1
输入: abc

输出：abc00000

*/


int main(void)
{
	string str;
	while(cin>>str)   //不是一个主函数只输入一次字符串 
	{
		if(str.size()%8 != 0)   	//6%8等于6，不等于0 
		{
			int count = 8 - (str.size()%8);   // 第一个8不能改成str.size() 
			str.append(count, '0');  // 尾部一次添加多个数据 
		}
		
		for(int i = 0; i < str.size(); i += 8)
		{
			string s1 = str.substr(i,8);
			cout << s1 << endl;
		}
	}
	
	return 0;
}

