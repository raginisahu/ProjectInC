#include <stdio.h>

int main(void)
{
    int area_code, exchange, subscriber;

    printf("\nEnter phone number [(999) 999-9999]: ");
    scanf("(%d) %d-%d", &area_code, &exchange, &subscriber);

    printf("You entered %d-%d-%d\n\n", area_code, exchange, subscriber);

    return 0;
}
