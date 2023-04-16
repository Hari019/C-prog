#include <stdio.h>
#include <string.h>

void swap (char *str1,char *str2);
int main ()

{
    char str1[100];char str2[100];

    printf ("enter the desired string 1 :\n");
    scanf ("%s",str1);
    printf ("string1 is :%s\n",str1);

    printf ("enter the desired string 2 :\n");
    scanf ("%s",str2);
    printf ("string2 is :%s\n",str2);

    swap (str1,str2);

 
return 0;

}

void swap(char *str1, char *str2)
{
char *temp = str1;
str1 = str2;
str2 = temp;
printf("After swapping\n");
printf ("str1 is :%s\n",str1);
printf ("str2 is :%s\n",str2);
}
