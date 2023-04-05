#include <iostream>
using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues( int i)
{
	double& ref = vals[i];
	return ref; //return the reference of i, ref is a reference variable, ref refer to vals[i] 
}


int main()
{
	cout << "before change, the value: " << endl;
	for(int i = 0; i < 5; i++ )
	{
		cout << "vals[" << i << "] = " << vals[i] << endl; 
	}
	
	setValues(1) = 20.33;
	setValues(3) = 70.8;
	
	cout << "after change, the value: " << endl;
	for(int i = 0; i < 5; i++ )
	{
		cout << "vals[" << i << "] = " << vals[i] << endl; 
	}
	
	//NULL ָ����һ�������ڱ�׼���е�ֵΪ��ĳ���
	int *ptr = NULL;
	cout << "ptr value is: " << ptr << endl;
	
	
	return 0;

}
