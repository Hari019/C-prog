#include <stdio.h>

int main()
{
int a[100][100]={0} ; int b[100][100]={0}; int c[100][100]={0};
int m,n,p,q,i,j,k,flag;

printf ("enter the order of first matrix as m and n \n ");

scanf ("%d%d",&m,&n);

printf ("enter the elements of first matrix row wise\n");

    for (i=0;i<m;i++)

    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    


printf ("the elements of first matrix is as follows\n");

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }    

printf ("enter the order of second matrix as p and q \n");

scanf ("%d%d",&p,&q);

printf ("enter the elements of second matrix row wise\n");

    for (i=0;i<m;i++)

    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }    


printf ("the elements of second matrix is as follows\n");

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }    
   
   if (n!=p)

   {
    printf ("matrix multiplication is not possible\n");
   }

else

{
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
flag=1;
}

if(flag== 1)
{
    printf ("multiplied matrix is as follows\n");


  for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }    
}
    return 0;
}
