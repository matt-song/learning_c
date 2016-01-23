#include <stdio.h>

int main()
{
    char food[5];
    puts("input your food: ");
    scanf("%s", food);      // did not limited the size of "food", if input > 5 chatacter. the program will code dump
    printf("the food is: %s\n", food);
    return 0;
}
