#include <stdio.h>

int main(void)
{
   char charvar ='\0'  ;

    printf("address of charcar =%p\n",(void *)(&charvar));
    printf("address of charcar - 1 =%p\n",(void *)(&charvar -1 ));
    printf("address of charcar + 1 =%p\n",(void *)(&charvar + 1 ));

 int intvar ='\0'  ;

    printf("address of charcar =%p\n",(void *)(&intvar));
    printf("address of charcar - 1 =%p\n",(void *)(&intvar -1 ));
    printf("address of charcar + 1 =%p\n",(void *)(&intvar + 1 ));
    
}