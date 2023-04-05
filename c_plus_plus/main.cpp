#include <iostream>
using namespace std;

int count;
extern void write_extern();


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	

	int count = 5;
	write_extern();
	
	return 0;
}
