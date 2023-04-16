#include <stdio.h>
#include <math.h>

int main ()

{
    float a , b , c , roots ;

        printf ("enter a ");
        scanf ("%f",&a);
        printf ("enter b ");
        scanf ("%f",&b);
        printf ("enter c ");
        scanf ("%f",&c);

        roots = (-b +pow(((b*b)-(4*a*c)) , .5 ))/(2*a) ;
       
        printf("roots are : %f",roots);

        return 0;




}