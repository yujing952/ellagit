#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int var;
	int *ptr;
	int **pptr;
	var = 3000;
	// make & get the address of var
	ptr = &var;
	
	// make & get the address of ptr
	pptr = &ptr;
	
	// 使用 pptr 获取值
    cout << "var value :" << setw(12) << var << endl;
    cout << "*ptr value:" << setw(12) << *ptr << endl;
    cout << "**pptr value:" << setw(10) << **pptr << endl;
 
    return 0;
	
}
