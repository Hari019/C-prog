#include <stdio.h>

int main ()

{
    char operator;
    float a,b;
    
     printf ("enter operator : ");
    scanf ("%c",&operator);

    printf ("enter a : ");
    scanf ("%f",&a);

     printf ("enter b :");
    scanf ("%f",&b);

    if (operator == '+')

    {
        printf ("total is : %f \n",a+b);

    }

    else if (operator == '-')
    {
        printf ("total is : %f \n",a-b);

    }

    else if (operator == '*')

    {
        printf ("total is : %f \n",a*b);

    }

    else if (operator == '/')

    {
        printf ("total is : %f \n",a/b);

    }

    else

   { printf ("wrong operator"); }

    return  0;

}
