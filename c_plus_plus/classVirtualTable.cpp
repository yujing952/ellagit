#include <iostream>

using namespace std;

class A
{
public:
    virtual void Display()
    {}
};
class B
{
public:
    void Display()
    {}
};

int main()
{
    cout << sizeof(A) << endl;//4
    cout << sizeof(B) << endl;//1
    getchar();
}
