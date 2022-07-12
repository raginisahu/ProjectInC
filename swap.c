#include <stdio.h>
#include <string.h>
#include <ctype.h>
int swaps(char *a,char *b ){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return 0;
}

void swapOne(char *a,char *b)
{
    int i,j ;
    for(i=0;i<strlen(a);i++) {
        // printf("a%c,%c\n",a[i],b[i]);
        if(isnumber(a[i])) {
             for(j=0;j<strlen(b);j++) {
                if(!isnumber(b[j])){
                   swaps(&a[i],&b[j]) ;
                   break;
                }
             }
        }
        
    }
   
    // printf("a%s\n",a);
}
 

int main(void)
{
	char a[50] ,aTmp[50];
    char b[50],bTmp[50] ;
    printf("enter first sentence:");
    gets(a);
    strncpy(aTmp,a,sizeof(a)) ;
    printf("enter second sentence:");
    gets(b);
    strncpy(bTmp,b,sizeof(b));
	printf("Original:\t%s/n%s\n", a, b);
	swapOne(a, b);
	printf("Swapped Sentence One:\t%s \t %s\n", a, b);
	// printf("Original:\t%s/n%s\n", aTmp, bTmp);
	swapOne(bTmp, aTmp);
	printf("Swapped Sentence Two:\t%s \t %s\n", aTmp, bTmp);
    
	return 0;
}