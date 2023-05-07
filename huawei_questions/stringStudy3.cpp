#include <iostream>
#include <string>
#include <cctype>   // cctype 头文件中含有对 string 中字符操作的库函数, like:判断字符类型：大/小写字母、标点、数字等
#include <algorithm>
#include <iterator>
using namespace std;


int main(void)
{
	string s1 = "abc";
	string s2 = "def";
	cout << "s1.empty(): " << s1.empty() << endl;
	cout << "s1.size(): " << s1.size() << endl;
	cout << "s1.length(): " << s1.length() << endl;
	cout << "s1[1] = "  << s1[1] << endl;
	cout << "s1[3] = "  << s1[3] << endl;	// 空字符还是存在的
	cout << "s1 + s2 = " << s1 + s2 << endl;

	// string compare
	 if (s1 == s2)
	 {
	 	cout << "s1 == s2" << endl;
	 }
	 else if(s1 < s2) 
	 {
	 	cout << "s1 < s2" << endl;
	 }
	 else
	 {
	 	cout << "s1 > s2" << endl;
	 }
	 
	 // make lower to upper
	 for( int i = 0; i < s1.length();i++)
	 {
	 	s1[i] = toupper(s1[i]);
	 }
	 cout << "s1 (toupper):" << s1 << endl;
	 
	 string s3 = s1.insert(1, s2); 
		 
	cout << "s1.insert(1, s2) = "  << s1.insert(1,s2) << endl;
	
	cout << "s3.erase( 1, 2) = "  << s3.erase(1,2) << endl;
	
	cout <<"s3.append() = " << s3.append("YYY") << endl;
	
	cout << "s3.replace(3,5, aaabbb) = "  << s3.replace(3,6,"aaabbb") << endl;
	
	cout << " current s3 = "  << s3 << endl;
	
	string s4 = "nice to meet you!";
 
 	cout << "s4 = " << s4 << endl;
	cout << "s4.find_first_of(mey):" << s4.find_first_of("mey") << endl;
	cout << "s4.find_last_of(e): "  << s4.find_last_of("e") <<endl;
	cout << "s4.find_first_not_of(nop): "  << s4.find_first_not_of("nop") << endl;
	
	
	string s5 = "how are you";	
	cout << "before reverse s5: " << s5 << endl;
	reverse(s5.begin(),s5.end());	 
	cout << "after reverse s5: " << s5 << endl;
	
	return 0;
	 
}
