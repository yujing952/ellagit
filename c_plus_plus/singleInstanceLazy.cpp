#include <iostream>
#include <string>
using namespace std;

void Lock()
{
}
void UnLock()
{
} 

class Singleton  
{  
private:  
    static Singleton* m_instance;  
    Singleton(){};  
public:  
    static Singleton* getInstance();  
};  
 //init static member m_instance 
Singleton* Singleton::m_instance = NULL;

Singleton* Singleton::getInstance()  
{  
    if(NULL == m_instance)  
    {  
        Lock(); //let other class take over to execute,such as boost
        if(NULL == m_instance)  
        {  
            m_instance = new Singleton;  
        }  
        UnLock();  
    }  
    return m_instance;  
}  


int main(void)
{
	return 0;
	
}
