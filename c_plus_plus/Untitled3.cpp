#include <iostream>
#include <set>
#include<string>
using namespace std;

int main()
{
	string str;
    set<char> s;
    while(getline(cin,str))
	{
       	for(int i=0;i<str.length();i++)
    		s.insert(str[i]);//��ÿ���ַ����뵽set����s��
   		cout<<s.size()<<endl;//����set������Ԫ�ظ�����set���ص���Ԫ�ر�����Ψһ�ģ��ظ���Ԫ�ػᱻ����      s.clear(); //�����set���Ա��ٴ����룬
   }
  
   return 0; 
}
