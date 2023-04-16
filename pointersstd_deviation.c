#include <stdio.h>
#include <math.h>

float mean (float *a,int n)
{
    float sum =0,m=0;
    int i;
    printf ("enter the elements to calculated");
    for (i=0;i<n;i++)
    {
        scanf ("%f",&a[i]);
        sum = sum + a[i];
    }
    m=sum/n;
    printf ("sum is %f \n",sum);
    return m;
}

float std_deviation (float*b,int n)
{
    float v=0;
    int i;
    float m;
    m=mean (b,n);
    printf ("mean is %f",m);

    for (i=0;i<n;i++)
    {
        v=v+((b[i]-m) *(b[i]-m));
    }

    v=v/n;

    printf ("standard deviation is %f",sqrt(v));

}


int main ()
{
    float x[50];
    int n;
    printf ("enter the no of elements :");
    scanf ("%d",&n);

    std_deviation(x,n);
    return 0;
}