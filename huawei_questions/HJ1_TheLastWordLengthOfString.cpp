#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
����
�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000����ע���ַ���ĩβ���Կո�Ϊ��β��
����������
����һ�У�����Ҫ������ַ������ǿգ�����С��5000��

���������
���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�

ʾ��1
���룺
hello nowcoder
����
�����
8
����
˵����
���һ������Ϊnowcoder������Ϊ8  
*/

// the solution:
//���һ��������ʵ���������ַ������һ���ո���һ�����ַ�����
//���ǲ����������ַ���������ӿ�ʼ����һ���ո�ĳ��ȼ��ɡ�


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
