#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
int main()
{
    //1
    FILE *filePointer;
    char ch;
    char visited[100];
    int count[100] = {0}, flag = 0;
    int i=0, j = 0, k = 0, l, max, index;

    //2
    filePointer = fopen("test.txt", "r");

    //3
    if (filePointer == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
        //4
        while ((ch = fgetc(filePointer)) != EOF)
        {
            if (i == 0)
            {
                visited[j++] = ch;
                count[j - 1]++;
            }
            else
            {
                for (k = 0; k  < j; k++)
                {
                    
                    if (tolower(ch) == visited[k] || toupper(ch) == visited[k] )
                    {
                        count[k]++;
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    visited[j++] = ch;
                    count[j - 1]++;
                }
                flag = 0;
            }

            for (i = 0; i < j; i++)
            {
                if ((i == 0) && (visited[i] != ' '))
                {
                    max = count[i];
                    continue;
                }
                if ((max < count[i]) && (visited[i] != ' '))
                {
                    max = count[i];
                    index = i;
                }
            }
            i++;
            printf("%c", ch);
        }
    }
    printf("index %d",index);
    //5
    printf("\nMax repeated character in the string = %c ", visited[index]);
    printf("\nIt occurs %d times", count[index]);
    fclose(filePointer);
 
    return 0;
}