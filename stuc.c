#include <stdio.h>  
typedef struct  
{  
    int no;
    char type[20];
    float price;
    int quantity;
    float total_price;
      
}item;  

item a[10]; 

int main()  
{  

int i,n;

printf("Enter the no of total item\n");
scanf ("%d",&n);
printf("Enter the details of item :\n");  

for(i=0;i<n;i++){

printf("Enter the item no :\n"); 
scanf("%d",&a[i].no); 
printf("Enter the type of item:\n");  
scanf("%s",a[i].type);  
printf("Enter the Price :\n"); 
scanf("%f",&a[i].price);  
printf("Enter the quantity of item :\n");  
scanf("%d",&a[i].quantity);
a[i].total_price=a[i].price*a[i].quantity;
}

for (i=0;i<n;i++){
printf ("-----------------------------------------------------------------------------------\n");

printf ("|   Item no    |    Item type   |   Unit Price  |   Quantity    |   Total Price    |\n");

printf ("|     %d       |      %s        |     %.2f      |      %d       |        %.2f      |\n",a[i].no,a[i].type,a[i].price,a[i].quantity,a[i].total_price);

printf ("-----------------------------------------------------------------------------------\n");
}
return 0;  
}
