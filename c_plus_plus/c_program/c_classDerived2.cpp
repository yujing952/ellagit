#include <iostream>
using namespace std;

class Base
{
    private:
        int b;
    public:
        Base(int a): b(a){}
        void print()
        {
            cout << "Base::void print()" << endl;
        }
        virtual void fun()
        {
            cout << "Base" << endl;
        }
};

class Derived1: public Base
{
    private:
        int c1;
    public:
        Derived1(int a1, int a2):Base(a1),c1(a2){}
        void print()
        {
            cout << "Derived1::void print()" << endl;
        }
        virtual void fun()
        {
            cout << "Derived 1" << endl;
        }
};

class Derived2: public Base
{
    private:
        int c2;
    public:
        Derived2(int a1, int a2):Base(a1),c2(a2){}
        void print()
        {
            cout << "Derived2::void print()" << endl;
        }

        virtual void fun()
        {
            cout << "Derived 2" << endl;
        }
};

int main()
{
    Base *bptr;
    Derived1 d1(10,1);
    Derived2 d2(10,2);

    bptr = &d1;
    bptr->fun();    // Derived 1
    d1.fun();        // Derived 1

    //print() function is not virtual function, which is decided on compile duration so still point to Base class
    bptr->print();     // Base::void print() (print() is not virtual function,so still point to Base class)
    d1.print();       // Derived1::void print() ( print()'s re-definition to lead Base hide)

    cout << "------------" << endl;
    bptr = &d2;
    bptr->fun();    // Derived 2
    d2.fun();      // Derived 2

    //print() function is not virtual function, which is decided on compile duration so still point to Base class
    bptr->print();    // Base::void print()
    d2.print();        // Derived2::void print() ( print()'s re-definition to lead Base hide)

    return 0;
}