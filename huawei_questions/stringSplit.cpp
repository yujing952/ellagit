#include <iostream>
#include <string>
#include <algorithm>   // reverse included
#include <vector>
#include <iterator>
#include <cctype>  
#include <stdlib.h>
using namespace std;

/*
����
����һ���ַ������밴����Ϊ8���ÿ�������ַ��������������

���Ȳ���8���������ַ������ں��油����0�����ַ���������

����������
���������ַ���(ÿ���ַ�������С�ڵ���100)

���������
����������зָ��ĳ���Ϊ8�����ַ���


ʾ��1
����: abc

�����abc00000

*/


int main(void)
{
	string str;
	while(cin>>str)   //����һ��������ֻ����һ���ַ��� 
	{
		if(str.size()%8 != 0)   	//6%8����6��������0 
		{
			int count = 8 - (str.size()%8);   // ��һ��8���ܸĳ�str.size() 
			str.append(count, '0');  // β��һ����Ӷ������ 
		}
		
		for(int i = 0; i < str.size(); i += 8)
		{
			string s1 = str.substr(i,8);
			cout << s1 << endl;
		}
	}
	
	return 0;
}

