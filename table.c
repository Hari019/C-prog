#include <stdio.h>

int main ()

{
    int n;
    printf ("enter no n :");
    scanf ("%d",&n);

   int i = n;
   
   while (i <= 10*n )
   {
    printf (" \n table is : %d \n",i);

    i = i + n;

   }

}