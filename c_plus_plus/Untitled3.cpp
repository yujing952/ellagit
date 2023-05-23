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
    		s.insert(str[i]);//把每个字符插入到set容器s里
   		cout<<s.size()<<endl;//计算set容器的元素个数，set的特点是元素必须是唯一的，重复的元素会被忽略      s.clear(); //清空了set，以便再次输入，
   }
  
   return 0; 
}
