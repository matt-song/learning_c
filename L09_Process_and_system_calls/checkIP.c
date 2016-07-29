#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
    if ( execlp("ipconfig","ipconfig", NULL) == -1 )
    {
        printf("unable to run ipconfig, will try ifconfig\n");
        printf("error code [%i]\n",errno);
        fprintf(stderr, "reason: [%s]\n\n", strerror(errno));
        
        if ( execl("/sbin/ifconfig","/sbin/ifconfig", NULL) == -1)
        {
            fprintf(stderr, "can not run ifconfig: %s", strerror(errno));
            return 1;
        }
    }
    
    return 0;
}

