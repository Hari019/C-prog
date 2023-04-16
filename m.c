#include<stdio.h>

int stringlength (char a[50])
{
    int i ;
    for (i=0;a[i]!='\0';i++);

    return i;
    
}
int stringcompare (char a[50],char b[50])
{
    int i,j,c;
    for(i=0,j=0;a[i]!='\0'||b[i]!='\0';i++,j++)
    {
        c=a[i]-b[j];
        if(c==0)
        {
            continue;
        }
        else if(c>0)
        {
            printf("s1 is greater than s2");
            return 0;
        }
        else if(c<0)
        {
            printf("s1<s2");
            return 0;
        }
        
    }
    if (c==0)
    {
        printf ("s1=s2");
        return 0;
    }
    return 0;
}

int stringcat(char a[50],char b[50])
{
    int i,j;
    for(i=stringlength(a),j=0;b[j]!='\0';i++,j++)
    {
        a[i]=b[j];
    }
    printf("%s",a);
    return 0;
}

int main()
{
    char s1[50];char s2[50];
    
    printf ("enter string 1 :");
    scanf ("%s",s1);
    
    printf ("enter string 2 :");
    scanf ("%s",s2);
    
    int l;

    l=stringlength (s1);
    printf ("string length of s1 %d",l);
    l=stringlength (s2);
    printf ("string length of s2 %d",l);
    stringcompare(s1,s2);
    
    stringcat(s1,s2);
}