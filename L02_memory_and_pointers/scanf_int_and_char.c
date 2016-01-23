#include <stdio.h>

int main()
{
    // get char
    char string[20];
    puts("please input a string: ");
    scanf("%19s", string);
    printf("the string you input is [%20s]\n", string);

    // get int
    int number;
    puts("please input a number: ");
    scanf("%20i", &number);
    printf("the number you input is [%20i]\n", number);
}
