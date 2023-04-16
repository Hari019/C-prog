// gcd of two no.
#include <stdio.h>

int main() {
    
    int a,b,i,gcd;
    
    printf ("enter the no a and b \n");
    scanf ("%d%d",&a,&b);
    
    for (i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
              {
                  gcd=i;
            
        }
    }
    
    printf ("gcd of %d and %d is %d\n",a,b,gcd);
    
    return 0;
}
