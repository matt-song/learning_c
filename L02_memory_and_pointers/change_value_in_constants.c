#include <stdio.h>

int main()
{
    // stararray is the address of array "abc", "abc" stored in constants, can not be changed
    // wrong way: char *stararray = "abc";  
    const char *stararray = "abc"; 
    
    char val[] = "x";

    // star_array[1] can not be changed, this will lead to error
    stararray[1] = *val;  
    // change_value_in_constants.c:11:5: error: assignment of read-only location ‘*(stararray + 1u)’

    puts(stararray);

    return 0;
}

