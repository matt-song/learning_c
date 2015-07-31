#include <stdio.h>

int main(int argc, char *argv[] )  // argc = counts of argments, argv[] = array of argments
{
    if ( argc != 6 ) // want 5 argments, $0 is program it self so the count is 5+1 =6
    {
        printf("Please give me 5 argments, current is [%i]", argc -1 );
    }
    else
    {
        printf("Argments list:\n");
        
        int i;
        for (i = 1; i<= 5; i++)
        {
            printf("%s\n", argv[i]);
        }
        printf("\n");
    }
}
