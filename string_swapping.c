#include <stdio.h>

int stringswap (char str1[100],char str2[100]);
int main ()

{
    char a[100];char b[100];

    printf ("enter the desired string 1 :\n");
    scanf ("%s",a);
    printf ("string1 is :%s\n",a);

    printf ("enter the desired string 2 :\n");
    scanf ("%s",b);
    printf ("string2 is :%s\n",b);

    stringswap (a,b);

 
return 0;

    
}

int stringswap (char str1[100],char str2[100])
{
    char temp[100]={0};
    int i;
    for (i=0;str1[i]!='\0';i++)
    {
       temp[i]=str1[i];
    }
    
     for (i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
    {
       str1[i]=str2[i];
    } 
    
    for (i=0;temp[i]!='\0';i++)
    {
       str2[i]=temp[i];
    }
    printf("After swapping\n");
    printf ("str1 is :%s\n",str1);
    printf ("str2 is :%s\n",str2);
    
    return 0;
}
