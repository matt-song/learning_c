#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);
    
    char *t = s + len - 1;   // [1,2,3,4,5] => 1 + 5 -1 = 5 last character of val's address
    while (t >= s)
    {
        printf("%c", *t);
        t--;
    }
    puts("");
}

int main()
{
    char string[] = "this is test string";
    
    print_reverse(string);
    
    return 0;
}
