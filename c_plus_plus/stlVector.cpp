#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int i;
	
	cout << "vector size = " << vec.size() << endl;
	
	// push 5 values to vector vec
	for(i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}
	
	// show extended vec size
	cout << "extended vector size = " << vec.size() << endl;
	
	//access the value of vector vec
	// 下标只能用于获取已存在的元素,不能用于创建vector vec 
	for(i = 0; i < 5; i++)
	{
		cout << "value of vec[" << i << "] = " << vec[i] << endl;
	}
	
	//access the value by interator
	vector<int>::iterator v = vec.begin();
	while(v != vec.end())
	{
		cout << "value of v = " << *v << endl;
		v++;
	}
	
	cout << "case 2:" << endl;
	int a[6] = {1,2,3,4,5,6};
	vector<int> b(a, a + 4);
	for(i = 0; i <= b.size()-1; i++)
	{
		cout << "b[" << i << "] = " << b[i] << ", ";
	}
	
	cout << "\ntraverse the vector b: " << endl;

	for (vector<int>::iterator it = b.begin(); it < b.end(); it++)
	{
		cout << *it << " ";
	}
	
	
	
	return 0;
}
