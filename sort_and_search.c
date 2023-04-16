#include <stdio.h>
int main()
{
    int n, temp,high,low,mid,key;
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
        printf("%d\t", a[i] );
    }
printf("\n Enter the key to be searched\n");
scanf("%d",&key);
low=0;
 high=n-1;
 while(low<=high)
 {
 mid=(low+high)/2;
 if(key==a[mid])
 {
 printf("The key is present at index %d in the array\n",mid);
 return 0;
 }
 else if(key>a[mid])
 {
 low=mid+1;
 }
 else if(key<a[mid])
 {
 high=mid-1;
 }
 }
 printf("The key is not present in the array\n");
 
    return 0;
}
