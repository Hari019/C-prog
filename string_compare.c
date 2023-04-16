#include <stdio.h>

void stringlength (char input[100]);
int stringcompare (char str1[100],char str2 [100]);
int main ()

{
    char a[100];

    printf ("enter the desired string 1 :\n");
    scanf ("%s",a);
    printf ("given string is :%s\n",a);
   
    char b[100];

    printf ("enter the desired string 2 :\n");
    scanf ("%s",b);
    printf ("given string is :%s\n",b);

    stringcompare (a,b);

}
void stringlength (char input [100])
{
    int i;

    for(i=0;input[i];i++);
    printf ("length of string is : %d",i);
}

int stringcompare (char str1[100],char str2 [100])
{
    int x,i,j,k;
    for(i=0,j=0;str1 [i]!='\0'||str2 [j]!='\0';i++,j++)
    {
        x= str1[i]-str2[j];
        k=x;
        if (x==0)
        {
            continue;
        }

        else if (x>0)
        {
            printf ("first string is greater than second string");
            return 0;
        }

        else{
            printf ("first string is less than second string");
            return 0;
        }
       
    }
    

    if (k==0){
       printf ("Both the strings are equall ");
    }

  
}