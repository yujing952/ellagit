#include <iostream>
#include <string>
#include <algorithm>   // reverse included
#include <vector>
#include <iterator>
#include <cctype>  
using namespace std;



int main(void)
{
	
	// reverse string s1
	string s1 = "how are you";	
	cout << "before reverse s5: " << s1 << endl;
	reverse(s1.begin(),s1.end());	 
	cout << "after reverse s5: " << s1 << endl;

	//reverse vector 	
	vector<int> v;
	for(int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	cout << "before reverse v: " << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
	}
	
	reverse(v.begin(), v.end());

	cout << "\nafter reverse v: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
	}
	
	string first, second;
	first = "123456789";
	second.resize(first.size());
	reverse_copy(first.begin(),first.end(), second.begin());
	cout << "\nsecond = " << second << endl;
	
	return 0;
	
}
