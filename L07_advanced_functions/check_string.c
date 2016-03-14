#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = 
{
    "William: SBM GSOH likes sports, TV, dining",
    "Matt: SWM NS likes art, movies, theater",
    "Luis: SLM ND likes books, theater, art",
    "Mike: DWM DS likes trucks, sports and bieber",
    "Peter: SAM likes chess, working out and art",
    "Josh: SJM likes sports, movies and theater",
    "Jed: DBM likes theater, books and dining"
};


void find_str()
{
    int i;
    // char key1[] = "sports";
    // char key2[] = "bieber";
            
    puts("Search results:");
    puts("------------------------------------");
    
    for (i = 0; i< NUM_ADS; i++) 
    {
        if ( strstr(ADS[i],"sports"))
        {
            //printf("[DEBUG] find sports in [%s]\n", ADS[i]);
            
            if (! strstr(ADS[i],"bieber"))
            {
                printf("Find this guy: [%s]\n", ADS[i]);
            }
        }
    }
    puts("------------------------------------");
}

int main()
{
    find_str();
    return 0;
}    
    

