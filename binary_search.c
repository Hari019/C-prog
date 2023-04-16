#include <stdio.h>
int main()
{
 int a[100]={0},high,low,mid,key,n,i;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the elements in sorted order\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the key to be searched\n");
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