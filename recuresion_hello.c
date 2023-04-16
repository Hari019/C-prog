#include <stdio.h>

void printhw (int count);

int main ()
{
 printhw (6);
 return 0;
}

void printhw (int count)
 {
  if(count==0)   
  {return;}
  printf ("helloworld\n");
  printhw(count-1);
  }