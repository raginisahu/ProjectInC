#include <stdio.h>

int main(void)
{
    int item_number, month, day, year,qty;
    float unit_price,total;   

    printf("\nEnter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    total = qty * unit_price;
    printf("\nItem\t\tUnit\t\tQTY\t\tPurchase\t\tTotal Amount\n\t\tPrice\t\t\t\tDate\n");
    printf("%d\t\t$%7.2f\t%d\t\t%.2d/%.2d/%d\t\t%7.2f\n\n", item_number, unit_price, qty,month, day, year,total);

    return 0;
}