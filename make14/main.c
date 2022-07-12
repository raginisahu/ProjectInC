#include <stdio.h>
#include "misc.h"
#include <string.h>

void appendFiles(int character, int line, int word)
{
    char *filename = "file_append.txt";
    FILE *fp;
    // declaring file pointers
    fp = fopen(filename, "a");

   /* Write content to file */
   fprintf(fp, "character %d, line %d, word %d;\n", character,line,word);

   fclose(fp);
}

int main()
{
    printf("Hello, World.\n");
    char in_name[80];
    FILE *in_file;
    int ch, character = 0, line = 0, space = 0, tab = 0,count=0;
    char *content [50];
    printf("Enter file name:\n"); // enter file name
    scanf("%s", in_name);

    in_file = fopen(in_name, "r");

    if (in_file == NULL)
        printf("Can't open %s for reading.\n", in_name);
    else
    {
        ch = fgetc(in_file);
        
        char lines [12800];
        
        while (fgets(lines, sizeof lines, in_file) != NULL)
        {
            fputs(lines, stdout);
            // printf("file :%s\n",lines);
            character+=problem5char(lines);
            line+=problem5lines(lines);
            count+=problem5words(lines);
        }
       
        fclose(in_file);
        appendFiles(character,line,count);
       
    }
    fflush(stdout);

    return 0;
}
