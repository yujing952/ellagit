#include <iostream>
#include <string>
using namespace std;

/*
常见字符的ASCII码值如下：空格的ASCII码值为32；

数字0到9的ASCII码值分别为48到57；

大写字母“A”到“Z”的ASCII码值分别为65到90；

小写字母“a”到“z”的ASCII码值分别为97到到122。
*/



/*
描述
写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）

数据范围： 
 1≤n≤1000 
输入描述：
第一行输入一个由字母、数字和空格组成的字符串，第二行输入一个字符（保证该字符不为空格）。

输出描述：
输出输入字符串中含有该字符的个数。（不区分大小写字母）

示例1
输入：
ABCabc
A
输出：
2
*/
int main(void)
{
	string inputstring;
	char t;
	getline(cin,inputstring);
	cin >> t;
	
	int count = 0;
	for(int i = 0; i < inputstring.length(); i++)
	{
		if(t <= 57)
		{
			if(inputstring[i] >= 65)
			{
				continue;
			}
			else if (inputstring[i] == t)
			{
				count++;
			}
		}		
		else
		{
			if (inputstring[i] == t || inputstring[i] == t-32 || inputstring[i] == t+32 )
			{
				count++;
			}
			
		}
	}
	cout << "the times of " << t << ":" << count << endl;
	
	return 0;
	
}
