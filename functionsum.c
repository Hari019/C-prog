#include <stdio.h>

int sum (int a , int b)
{
   return a+b;
}

int main ()

{
    
    int  a , b;
  
    printf ("enter first no a :\n");
   
    scanf ("%d",&a);

    printf ("enter second no b :\n");
    scanf  ("%d",&b);

    int s = sum (a , b);
    printf ("sum is :%d \n",s);

    return 0;

}