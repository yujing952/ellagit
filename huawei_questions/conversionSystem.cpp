#include <iostream>
#include <cmath>
using namespace std;

/*

描述
写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。

数据范围：保证结果在 保证结果在 1 <= n <= 2的31次方 - 1
 
注意本题有多组输入

输入描述：
输入一个十六进制的数值字符串。注意：一个用例会同时有多组输入数据.

输出描述：
输出该数值的十进制字符串。不同组的测试用例用\n隔开。

示例1
输入：

0xA
0xAA
输出: 

10
170

*/


int main(void)
{
	string inputstring;
	long count = 0;
	
	while(cin >> inputstring)
	{
		int len = inputstring.length();
		for(int i = len-1; i > 1; i--)
		{
			if(inputstring[i] - '0' <= 9)
			{
				count += (inputstring[i] - '0')*pow(16,len-1-i); 
			}
			else
			{
				count += (inputstring[i] - 'A' + 10)*pow(16,len-1-i); 
			}
		}
		
		cout << "the transferred value:" << count << endl;
		count = 0;
	}
	
	return 0;
}
