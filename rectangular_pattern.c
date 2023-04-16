#include <stdio.h>

int main() {
    
    printf("enter the value of n \n");
    int n;
    scanf ("%d",&n);
    
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=n;j++)
        {
            printf ("*");
        }
        printf ("\n");

    }
    return 0;
} 