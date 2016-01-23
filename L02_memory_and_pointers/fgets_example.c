#include <stdio.h>

int main()
{
    char food[5];
    printf("Enter the food: ");
    fgets(food, sizeof(food), stdin);
    printf("the food you input is [%s]\n", food);
    return 0;
}
