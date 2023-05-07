#include <iostream>
#include <cmath>
using namespace std;

/*

����
д��һ�����򣬽���һ��ʮ�����Ƶ������������ֵ��ʮ���Ʊ�ʾ��

���ݷ�Χ����֤����� ��֤����� 1 <= n <= 2��31�η� - 1
 
ע�Ȿ���ж�������

����������
����һ��ʮ�����Ƶ���ֵ�ַ�����ע�⣺һ��������ͬʱ�ж�����������.

���������
�������ֵ��ʮ�����ַ�������ͬ��Ĳ���������\n������

ʾ��1
���룺

0xA
0xAA
���: 

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
