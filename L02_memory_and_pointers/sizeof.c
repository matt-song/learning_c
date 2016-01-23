#include <stdio.h>

int main()
{
    char s[] = "how big is the string?";
    char *t = s;

    puts(s); // how big is the string?
    puts(t); // how big is the string?
    
    printf("the size of string is %i\n", sizeof(s));  //23
    printf("the size of mem address is %i\n", sizeof(t));  //4
    
    return 0;
}



