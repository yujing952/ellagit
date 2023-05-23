#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。

示例1
输入：
hello nowcoder
复制
输出：
8
复制
说明：
最后一个单词为nowcoder，长度为8  
*/

// the solution:
//最后一个单词其实就是整个字符串最后一个空格后的一个子字符串，
//我们不妨将整个字符串逆序，求从开始到第一个空格的长度即可。


int main()
{
	string s;
	getline(cin,s);
	int size = s.size()-1; // drop '\0' position identifer
	int count = 0;
	reverse(s.begin(), s.end());
	while(s[count]!= ' ' && count <= size)
	{
		count++;
	}
	cout << count << endl;
	
	return 0;
}
