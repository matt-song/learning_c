#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    execlp("sleep","sleep", "10000", NULL);
    return 0;
}

