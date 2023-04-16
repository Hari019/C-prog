#include <stdio.h>
int main()
{
    printf ("enter the string\t");
    char s[10];
    scanf("%s",s);
    int i,j,cout=0;
   
   for(i=0; s[i]!='\0';i++)
   {
    cout++;
   }
    i=cout;
    printf ("length of string is :%d\n",i);

    printf ("reverse string is :\n");

    for (j=i-1;j>=0;j--)
    {
        printf ("%c\n",s[j]);
    }
    return 0;

}