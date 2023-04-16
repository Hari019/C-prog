#include <stdio.h>

void stringlength (char input[100]);
int main ()

{
    char a[100];

    printf ("enter the desired string :\n");
    scanf ("%s",a);
    printf ("given string is :%s\n",a);

    stringlength (a);

}
void stringlength (char input [100])
{
    int i;

    for(i=0;input[i];i++);
    printf ("length of string is : %d",i);
}