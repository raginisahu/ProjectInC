#include <stdio.h>
#include <string.h>
int main(void)
{
    char pass [50];
    int l =0 ,sub;
    printf("enter password =");
    scanf("%s",pass);
    l = strlen(pass);
    if(l <10) {
        sub = 10 - l;
        sub = sub * 5;
        if(sub > 30) {
            printf("The password is unsafe! Please reset.Total deduction is =%d",sub);
        }
        else {
            printf("The password is safe%d",sub);
        }
    }
    else{
        printf("The password is safe");
    }

}