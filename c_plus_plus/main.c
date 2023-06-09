#include <stdio.h>
#include <stdlib.h>
#include "hello.c"

extern int n;

void func()
{
	n++;
	printf("after: %d\n", n);
}

int main(int argc, char *argv[]) {
	
	printf("before: %d\n", n);
	func();
	 
	return 0;
}
