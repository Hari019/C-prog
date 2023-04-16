//string concatenate
#include <stdio.h>

int stringlength (char input[100]);
int stringconcatenation (char str1[100],char str2[100]);
int main ()

{
    char a[100];char b[100];

    printf ("enter the desired string 1 :\n");
    scanf ("%s",a);
    printf ("given string is :%s\n",a);

    stringlength (a);

    printf ("enter the desired string 2 :\n");
    scanf ("%s",b);
    printf ("given string is :%s\n",b);

    stringlength (b);

    stringconcatenation (a,b);

    printf ("concatenated string is :%s\n",a);


}
int stringlength (char input [100])
{
    int i;

    for(i=0;input[i];i++){}

    printf ("length of string is : %d",i);
    
    return i;
}

int stringconcatenation (char str1[100],char str2[100])
{
    int i, j;
    j=stringlength(str1);
    printf ("length of string is : %d",j);
    for (i=0;str2[i]!='\0';i++,j++)
    {
        str1[j]=str2[i];
    }
    return 0;
}
