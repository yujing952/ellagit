#include <iostream>
#include <string>
using namespace std;

/*
�����ַ���ASCII��ֵ���£��ո��ASCII��ֵΪ32��

����0��9��ASCII��ֵ�ֱ�Ϊ48��57��

��д��ĸ��A������Z����ASCII��ֵ�ֱ�Ϊ65��90��

Сд��ĸ��a������z����ASCII��ֵ�ֱ�Ϊ97����122��
*/



/*
����
д��һ�����򣬽���һ������ĸ�����ֺͿո���ɵ��ַ�������һ���ַ���Ȼ����������ַ����и��ַ��ĳ��ִ������������ִ�Сд��ĸ��

���ݷ�Χ�� 
 1��n��1000 
����������
��һ������һ������ĸ�����ֺͿո���ɵ��ַ������ڶ�������һ���ַ�����֤���ַ���Ϊ�ո񣩡�

���������
��������ַ����к��и��ַ��ĸ������������ִ�Сд��ĸ��

ʾ��1
���룺
ABCabc
A
�����
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
