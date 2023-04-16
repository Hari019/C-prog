#include <stdio.h>
void matrixinput(int matrix[100][100],int row ,int column );
void matrixoutput(int matrix[100][100],int row,int column);
void matrixtranspose(int a[100][100],int b[100][100],int row,int column);

int main() 
{
int m,n,p,q,i,j,k;
int a[100][100],b[100][100],c[100][100];

printf ("Take the order of matrix a as m,n\n");
scanf ("%d%d",&m,&n);

 p=n;
 q=m;

matrixinput(a,m,n);
matrixoutput(a,m,n);

 matrixtranspose(a,b,m,n);

printf("transpose of the given matrix is:\n");
matrixoutput(b,p,q);

  return 0;
}

void matrixinput(int matrix[100][100],int row ,int column)
{
    printf("enter elements of matrix\n");
    for (int i=0;i<row;i++)
    {for (int j=0;j<column;j++)
     {   scanf ("%d",&matrix[i][j]);
     }
    }
}

void matrixoutput(int matrix[100][100],int row,int column)
{
    for (int i=0;i<row;i++)
    {for (int j=0;j<column;j++) {
     printf ("%d\t",matrix[i][j]);
     }
      printf ("\n");
    }
}    
void matrixtranspose(int a[100][100],int b[100][100],int row,int column)
{
    for (int i=0;i<row;i++)
    {for (int j=0;j<column;j++) 
     {
        b[j][i]=a[i][j];     
     }
    }
}    
   



