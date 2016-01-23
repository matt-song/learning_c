#include <stdio.h>

int main()
{
    int array[] = {4, 2, 3};
    
    // the address of array is the 1st element of the array
    printf("array[0] is:    %i\n", array[0]);
    printf("*array is:      %i\n", *array);
    
    // to get the 3rd element of array, use address + 2
    printf("array[2] is:    %i\n", array[2]);
    printf("*(array+2) is:  %i\n", *(array+2));  // address + 2

    // array[2] == *(array + 2) == *(2 + array) == 2[array]
    printf("2[array] is:    %i\n", 2[array]);  // address + 2
    
    return 0;
}
