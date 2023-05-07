#include <iostream>
#include <string>
using namespace std;


/*
描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）

输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。


示例1
输入：hello nowcoder
输出：8
说明：最后一个单词为nowcoder，长度为8   

思路
（1）使用string类来存储输入的字符串
（2）利用string的rfind方法反向查找最后一个空格的位置，得到最后一个单词+空格的长度 nword_len
（3）使用length方法获取字符串总长度记为ntotal_len
（4）故单词长度 = ntotal_len-nword_len
*/

int main(void)
{
	string str;
	getline(cin,str);
	int nword_len = str.rfind(" ");  //查找 str中 " "最后一次出现的位置
	
	cout << "the length of last word:" << str.length() - nword_len - 1 << endl;
	return 0;
}
