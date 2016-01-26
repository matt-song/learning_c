#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *option_d;
    int option_t;
    char ch;
    
    while ( (ch = getopt(argc, argv, "d:t")) != EOF )
    {
        switch (ch)
        {
            case 'd':
            option_d = optarg;
            break;
            case 't':
            option_t = 1;
            break;
            default:
            puts("wrong option...");
            return 1;
        }
    }
    printf("option d is [%s], option t is [%i]\n", option_d, option_t);
    
    printf("val of option d is [%s]\n", option_d);
    printf("add of option d is [%p]\n", option_d);
    
    return 0;
}
