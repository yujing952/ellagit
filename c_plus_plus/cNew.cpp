#include <iostream>
using namespace std;

int main()
{
    int* p = new int;
    *p = 5;
    *p = *p + 10;

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    delete p;

    p = new int[10];
    for(int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
        cout << "p[" << i << "] = " << p[i] << endl;
    }
    
    delete[] p;

    return 0;
}