#include <stdio.h>
#include <math.h>
int main()

{
    float a,b,c,dis,r1,r2,real,img;

    printf ("enter coefficients of quadratic :");
    scanf ("%f%f%f",&a,&b,&c);

    dis=(b*b-(4*a*c));

    if (a==0)
    {
        printf ("invalid coefficient");
    }
    else if (dis==0)
    {
        printf ("roots are equal and distinct \n");
        r1=r2=(-b/(2*a));
        printf ("root1 = %.3fand root2 = %.3f",r1,r2);
    }   
    else if (dis>0)
     {
        printf ("roots are real and distinct \n");
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf ("root1 = %.3f and root2 = %.3f",r1,r2);
    }
     else
     {
        printf ("roots are img and distinct \n");
        real=-b/(2*a);
        img=(sqrt(-dis))/(2*a);
        printf ("root1 = %.3f+i%.3f\n",real,img);  
        printf ("root2 = %.3f-i%.3f\n",real,img);
    }

return 0;

}
