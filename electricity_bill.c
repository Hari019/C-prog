// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[100];
    float unit;
    float amount;
    printf ("Enter consumer name:");
   scanf("%s",a);
    printf ("unit consumed:");
    scanf ("%f",&unit);
    printf ("consumer name:%s\n",a);
    if (unit==0)
    amount=100;
    else if (0<unit&&unit<=200)
    amount=100+(unit*.8);
    else if (200<unit&&unit<=300)
    amount=100+160+((unit-200)*.9);
    else if (300<unit&&unit<400)
    amount=100+160+90+((unit-300)*1);
    else
    printf("invalid unit:");

    if (amount<400)
    printf("total bill is:%.2f",amount);
    else if (amount>=400)
    amount=amount+(.15*amount);
    printf("Total bill is %.2f:",amount);
    return 0;
}