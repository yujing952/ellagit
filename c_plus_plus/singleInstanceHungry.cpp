#include <iostream>

using namespace std;

class Singleton{
	public:
		static Singleton* GetInstance();
	private:
	    Singleton(const Singleton&){};
        Singleton& operator=(const Singleton&){};
		Singleton(){};
		static Singleton* instance;
};

//init 
Singleton* Singleton::instance = new Singleton();

Singleton* Singleton::GetInstance()
{
	return instance;
}


int main(void)
{

	return 0;
	
}  
