#include <stdio.h>
int printnum(int n)
{
   
    if (n==0){
        return 0;
    }
    printf ("%d \n",n);
    printnum (n-1);
}
int main ()
{
    printf ("Enter the no n :\n");
    int n;
    scanf ("%d",&n);

    printnum(n);

}