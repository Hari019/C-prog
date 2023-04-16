 // binomial coefficient for given value of n and k
#include <stdio.h>

int main() {
    int nfac=1,i,n,k,kfac=1,n_kfac=1;
    
    printf ("enter the value of n and k \n");
    scanf ("%d%d",&n,&k);
    if(n<k)
    {
        printf ("n should be greater or equal to k");return 0;
    }
    else
    for (i=1;i<=n;i++)
    {
        nfac=nfac*i;
    }
    printf("n is %d\n",nfac);
    for (i=1;i<=k;i++)
    {
        kfac=kfac*i;
    }
    printf("k is %d\n",kfac);
    for (i=1;i<=n-k;i++)
    {
        n_kfac=n_kfac*i;
    }
    printf("n-k is %d\n",n_kfac);
    float bin_coef;
    
    bin_coef=(kfac*n_kfac);
    
    printf ("the value of binomial coefficient for given n and k is %.2f",nfac/bin_coef);
    
    return 0;
}