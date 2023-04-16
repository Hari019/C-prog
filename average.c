#include <stdio.h>

int main()
{
    float a , b , c ,average ;
    
    printf ("enter no a :");
    scanf ("%f",&a);
    
    printf ("enter no b :");
    scanf ("%f",&b);
    
    printf ("enter no c :");
    scanf ("%f",&c);

    average = (a+b+c)/3;

    printf ("average is : %f/n",average);

    return 0;
}