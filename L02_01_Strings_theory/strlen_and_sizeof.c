#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "this is a fucking string";
    
    printf("size of the string by sizeof is %i\n", sizeof(string));     // 25 with \0
    printf("size of the string by strlen is %i\n", strlen(string));     // 24 without \0
    
    return 0;
}
