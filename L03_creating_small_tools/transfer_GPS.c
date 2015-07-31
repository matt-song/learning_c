#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;
    
    puts("data=[");
    
    while( scanf("%f,%f,%79[^\n]", &latitude,&longitude, info) == 3 )   // scanf("%*[^\n]");//表示读入所有不是换行的字符串
    {
        if (started)
        {
            printf(",\n");
        }
        else
        {
            if ( (latitude>= 90) || (latitude <= -90) )
            {
                // printf("invalid latitude [%f]\n", latitude);
                fprintf(stderr, "invalid latitude [%f]\n", latitude);
                // return 2;
                continue;
            }
            printf("{latitude: %f, longitude: %f, info: '%s'}\n", latitude,longitude,info );
        }
    }
    puts("]");    
    return 0;
}
