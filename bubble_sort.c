#include <stdio.h>
int main()
{
    int n, temp;
    int a[50];
    printf("enter size of array :");
    scanf("%d", &n);

    printf("enter elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("shorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
