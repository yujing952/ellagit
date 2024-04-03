#include <iostream>
using namespace std;
int main()
{
    int b = 2;
    int *c = &b;
    int* const a = &b;

    cout << "&b = " << &b << endl;   // &b = 0x7ffcfdf75f84
    cout << " c = " << c << endl;    //  c = 0x7ffcfdf75f84
    cout << "*c = " << *c << endl;   // *c = 2
    cout << " a = " << a << endl;    //  a = 0x7ffcfdf75f84
    cout << "*a = " << *a << endl;   // *a = 2

    *c = 6;
    cout << "after *c = 6" << endl;
    cout << " c = " << c << endl;    //  c = 0x7ffeee525cb4
    cout << "*c = " << *c << endl;   // *c = 6
    cout << " a = " << a << endl;    //  a = 0x7ffeee525cb4
    cout << "*a = " << *a << endl;   // *a = 6

    b = 3;
    cout << "after b = 3" << endl;
    cout << " c = " << c << endl;    //  c = 0x7ffd1280af74
    cout << "*c = " << *c << endl;   // *c = 3
    cout << " a = " << a << endl;    //  a = 0x7ffd1280af74
    cout << "*a = " << *a << endl;   // *a = 3

    return 0;
}
