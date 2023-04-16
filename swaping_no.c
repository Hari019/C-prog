#include <stdio.h>

int main ()
{
    int a,b;
    printf("enter a : ");
    scanf("%d",&a);

    printf ("enter b :");
    scanf ("%d",&b);

    int temp = a;
    a = b;
    b = temp;
 
    printf("\nAfter Swapping: a = %d, b = %d", a, b);

    return 0;
}