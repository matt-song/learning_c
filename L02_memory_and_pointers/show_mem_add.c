#include <stdio.h>

int main()
{
    int x = 4;
    printf("the memory add for x is %p\n", &x);
    int *add_of_x = &x;
    int y = *add_of_x;
    printf("the value of address is %i\n", y);
    
    return 0;
}
