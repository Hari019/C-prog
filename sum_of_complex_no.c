// sum of complex no using structures;
#include <stdio.h>

struct sum {
    float real;
    float img;
};

int main() {
    struct sum a,b,c;
    
    printf("enter real and img part of a\n");
    scanf ("%f%f",&a.real,&a.img);
    
    printf("enter real and img part of \n");
    scanf ("%f%f",&b.real,&b.img);
    
    c.real=a.real+b.real;
    c.img=a.img+b.img;
  
    printf ("sum of a and b as %.2f+%.2fi",c.real,c.img);
    return 0;
}