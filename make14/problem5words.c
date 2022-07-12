#include <stdio.h>
#include "misc.h"
 #include <string.h>
 
/*function definition*/
int problem5words(char *in_file)
{
    // printf("function claeed");
    int i,word=0;
       for(i=0; i< strlen(in_file) ; i++)
        {
        //    printf("word %d",word);

           if(in_file[i] ==' ' || in_file[i] == '\n')  
             word++; 
        }
    return word;
}
