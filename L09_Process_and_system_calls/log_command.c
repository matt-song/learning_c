#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// get time
char * now()
{
    time_t t;
    time (&t);
    return asctime(localtime (&t));
}

int main()
{
    char comment[80];
    char cmd[120];
    
    // get comment
    fgets (comment, 80, stdin);
    strtok(comment, "\n");
    
    // generat a command string, echo "comment" > [log]
    sprintf(cmd, "echo '%s %s' >> /tmp/report.log", comment, now() );
   
    
    system(cmd);
    system("tail /tmp/report.log");
    
    return 0;
}

