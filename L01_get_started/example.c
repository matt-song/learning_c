#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];  // 2 char for card name, 1 for /0
    int count = 0;
    
    while (card_name[0] != 'X') 
    {
        puts("input the card name: ");
        scanf("%2s", card_name);    // just need first 2 chars 
        int val = 0;
        
        switch(card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;    
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if ((val < 1)||(val > 10))
                {
                    puts("I can not understand what you input...");
                    continue;
                }
        }
        if ((val > 2)&&(val < 7))
        {
            count++;        
        }
        else if (val == 10)
        {
            count--;
        }
        printf("current count: %i\n", count);
    }
    return 0;
}
