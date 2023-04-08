#include <iostream>
#include <string>
using namespace std;


class CSingleton  
{  
public:  
static CSingleton* GetInstance()  
{  
     if ( m_pInstance == NULL )    
         m_pInstance = new CSingleton();  
     return m_pInstance;  
}  
private:  
    CSingleton(){};  
    static CSingleton * m_pInstance;  
};

int main(void)
{

	return 0;
	
}
