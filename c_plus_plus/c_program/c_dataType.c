#include <stdlib.h>
int g_uninit;        // BSS: un-unit global variable
int g_init = 10;     // Data Segment: unit global variable
static int s_uninit; // BSS: un-unit static global variable 

int main() {
    int a = 5;       // Stack: local variable
    static int s_init = 20; // Data Segment: static unit local variable
    int *p = (int*)malloc(4); // Heap: dynamic assign)
    free(p);
    return 0;
} 


