#include <stdio.h>
int fac(int n){
    if (n==1||n==0){
   return 1;
    }
    int fact=n * fac(n-1);
    return fact;
}
int main()
{
    int n;
    printf ("enter the value of n:\n");
    scanf ("%d",&n);
    int fact=fac (n);
    printf ("factorial of %d is : %d",n , fact);
}