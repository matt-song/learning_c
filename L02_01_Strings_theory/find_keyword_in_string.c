#include <stdio.h>
#include <string.h>

int main()
{
    char songs[][80] = {    //first [] for limit the whole array, 2nd [] for limit the individual val
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jima",
    };

    char keyword[80];
    puts("please input the keyword: ");
    scanf("%s", keyword);
    
    int i;
    for ( i=0; i<=4; i++ )
    {
        // do the search...
        printf("checking song [%s]...\n", songs[i]);
        if ( strstr(songs[i],keyword) )   // string, keyword
        {
            printf("find song [%s] with keyword [%s]\n",songs[i], keyword);
        }
    }
    return 0;
    
}
