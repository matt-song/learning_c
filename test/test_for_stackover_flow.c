#include <stdio.h>

int global_val = 1;

int main()
{
    int x = 10;
    printf("the address of x is %p\n", &x);
    printf("the address of global_val is %p\n", &global_val);
    int *g = &global_val;
    int y = *g;
    y++;
    printf("new val for global is %i\n", y);
}
