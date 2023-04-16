
#include <stdio.h>
void matrixinput(int matrix[100][100],int row ,int column );
void matrixoutput(int matrix[100][100],int row,int column);
void matrixmultiplication(int a[100][100],int b[100][100],int c[100][100],int row,int temp,int column);

int main() 
{
int m,n,p,q,i,j,k;
int a[100][100],b[100][100],c[100][100];

printf ("Take the order of matrix a as m,n\n");
scanf ("%d%d",&m,&n);

printf ("Take the order of matrix a as p,q\n");
scanf ("%d%d",&p,&q);


matrixinput(a,m,n);
matrixoutput(a,m,n);


matrixinput(b,p,q);

matrixoutput(b,p,q);

matrixmultiplication(a,b,c,m,n,q);

printf("resultant matrix is:\n");

matrixoutput(c,m,q);

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
void matrixmultiplication(int a[100][100],int b[100][100],int c[100][100],int row,int temp,int column)
{
    for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         c[i][j] = 0;
      }
   }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            for (int k=0;k<temp;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}


