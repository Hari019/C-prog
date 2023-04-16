#include <stdio.h>

struct things 
{
    int no;
    char item_type[20];
    float price;
    int quantity;
    float total_price;
    
} item [10];


void main()
{
    struct things item[10];
   
    printf ("Enter the no of item");
    scanf ("%d",&item.no);
    
    printf ("Enter the type of the item");
    scanf ("%s",item.item_type);
    
    printf ("Enter the price of the item");
    scanf ("%f",&item.price);
    
    printf ("enter the quantity of the item");
    scanf ("%d",&item.quantity);
    
    item.total_price=item.price*item.quantity;
    
    
    
}