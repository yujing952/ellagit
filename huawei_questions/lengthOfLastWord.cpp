#include <iostream>
#include <string>
using namespace std;


/*
����
�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000����ע���ַ���ĩβ���Կո�Ϊ��β��

����������
����һ�У�����Ҫ������ַ������ǿգ�����С��5000��

���������
���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�


ʾ��1
���룺hello nowcoder
�����8
˵�������һ������Ϊnowcoder������Ϊ8   

˼·
��1��ʹ��string�����洢������ַ���
��2������string��rfind��������������һ���ո��λ�ã��õ����һ������+�ո�ĳ��� nword_len
��3��ʹ��length������ȡ�ַ����ܳ��ȼ�Ϊntotal_len
��4���ʵ��ʳ��� = ntotal_len-nword_len
*/

int main(void)
{
	string str;
	getline(cin,str);
	int nword_len = str.rfind(" ");  //���� str�� " "���һ�γ��ֵ�λ��
	
	cout << "the length of last word:" << str.length() - nword_len - 1 << endl;
	return 0;
}
