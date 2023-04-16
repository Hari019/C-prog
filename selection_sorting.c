#include <stdio.h>
int main ()

{
   int a[10];
    int n;
    printf ("enter the value of n \n");
    scanf ("%d",&n);
    printf ("enter the elements to be sorted\n");

for (int i=0;i<n;i++){
    scanf ("%d",&a[i]);
}
  printf("unshorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\n", a[i] );
    }

for (int i=0;i<n-1;i++){
    int min=i;
    for(int j=1;j<n-1;j++){
        if(a[i]>a[i+1]){

        }
    }
}


return 0;

}