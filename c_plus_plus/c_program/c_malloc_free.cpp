#include <stdlib.h>  // Incude malloc/free head file
#include <stdio.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));  // Use malloc to assign memory
    if (ptr != NULL) {
        *ptr = 10;
        printf("%d\n", *ptr);
        free(ptr);  // Use free to release memory
    }
    return 0;
}
