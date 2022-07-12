#include <stdio.h>
#include "misc.h"
 #include <string.h>
/*function definition*/
int problem5char(char *in_file)
{
    // printf("/n ch %s/n",in_file);

    int i,character=0;
    for(i=0; i< strlen(in_file) ; i++)
        {
            character++;

        }
    return character;
}
