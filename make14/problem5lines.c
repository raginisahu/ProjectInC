#include <stdio.h>
#include "misc.h"
 #include <string.h>
 
/*function definition*/
int problem5lines(char *in_file)
{
    // printf("function claeed");
    int ch,lines=0;
    int i;
    for(i=0; i< strlen(in_file) ; i++)

    {
        // printf("lines %d",lines);

        if (in_file[i] == '\n') {
        lines++;
        }
    }
    return lines;
}
