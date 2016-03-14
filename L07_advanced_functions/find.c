#include <stdio.h>
#include <string.h>

int sports_no_bieber(char *s)
{
return strstr(s, "sports") && !strstr(s, "bieber");
}


void find( )
{
int i;
puts("Search results:");
puts("------------------------------------");
for (i = 0; i < NUM_ADS; i++) {
if ( (ADS[i])) {
printf("%s\n", ADS[i]);
}
}
puts("------------------------------------");
}
