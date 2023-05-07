#include<iostream>
using namespace std;

class RefPtr
{
   //所有成员都为私有    
   friend class TestPtr;

   int *ptr;

   size_t count;

   RefPtr (int *p): ptr(p), count(1) {}

   ~RefPtr () 
   {
       delete ptr;
   }
};

class TestPtr
{
public:
    TestPtr(int *p): ptr(new RefPtr(p)) { }

    TestPtr(const TestPtr& src): ptr(src.ptr)
    {
        ++ptr->count;
    }

    TestPtr& operator= (const TestPtr& rhs) 
    {
        // self-assigning is also right
        ++rhs.ptr->count;
        if (--ptr->count == 0)
            delete ptr;
        ptr = rhs.ptr;
        return *this;
    }

    ~TestPtr() 
    {

        if (--ptr->count == 0)
            delete ptr;
    }

private:
    RefPtr *ptr;

};

int main(void)
{
	
	return 0;
	
}

