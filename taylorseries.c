#include <stdio.h>
#include <math.h>

int main()
{

    float degree,n;
    printf ("enter the degree");
    scanf ("%f",&degree);
    float x,num,den,value,term;
    x=(degree/180)*3.142;

    printf ("enter the value of n");
    scanf ("%f",&n);

    num=x;
    den=1.0;
    value=0.0;
    term=num/den;

    for(int i=1;i<=n;i++)
        {
           value=value+term;
            num=-num*x*x;
            den=den*(2*i)*(2*i+1);
            term=num/den;

        }

    printf ("the value of sinx using code :%.2f\n",value);

    printf ("the value of sinx usinf built in library%.2f\n",sin(x));
    return 0;    


}