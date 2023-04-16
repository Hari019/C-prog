#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

struct node 
{
    int sem;
    char phno[10];
    char name[20],branch[10],usn[20];
    struct node *link;
};
int count=0;
typedef struct node *NODE;

NODE getnode(){
    NODE new=NULL;
    int sm;
    char ph[10],nm[10],br[10],us[20];
    new=(NODE)malloc (sizeof (struct node));

    printf("Enter student Details :\n");
    printf("usn :\n");
    scanf("%s",us);
    fflush(stdin);

    printf("branch :\n");
    scanf("%s",br);
    fflush(stdin);

    printf("name :\n");
    scanf("%s",nm);
    fflush(stdin);

    printf("phone :\n");
    scanf("%s",ph);
    fflush(stdin);

    printf("sem :\n");
    scanf("%d",sm);
    
    strcpy(new->usn,us);
    strcpy(new->branch,br);
    strcpy(new->name,nm);
    strcpy(new->phno,ph);
    int sem=sm;

    new->link=NULL;
    count++;
    return new;
    
}

NODE insert_front(NODE first){
    NODE temp;
    temp=getnode();
    temp->link=first;
    return 0;
}


void display(NODE first )
{
	NODE temp;
	if(first==NULL)
	{
		printf("List is Empty!!\n");
		return;
	}

	temp = first;
	printf("\n-------------------------------------\n");
	printf("\nUSN\tNAME\tBRANCH\tSEM\tPHNO\n");
	printf("\n-------------------------------------\n");
	while( temp!=NULL )
	{
	  printf("\n%s\t%s\t%s\t%d\t%s\n", temp->usn, temp->name,temp->branch,temp->sem, temp->phno );
	  temp = temp->link;
	}
	printf("\nThe number of nodes in the list : %d\n", count);
}


void main( )
{
  int ch,n,i;
  NODE first=NULL;
//   clrscr();
  for(;;)
  {
  printf("-----------STUDENT DATA-----------------\n");
  printf("\n 1 - CREAT A SLL OF 'N' STUDENTS");
  printf("\n 2 - DISPLAY");
  printf("\n 3 - INSERT_FRONT");
  printf("\n 4 - INSERT_REAR");
  printf("\n 5 - DELETE_FRONT");
  printf("\n 6 - DELETE_REAR");
  printf("\n 7 - STACK PUSH OPEARATION");
  printf("\n 8 - STACK POP OPEARATION");
  printf("\n 9 - EXIT\n");
  printf("----------------------------------------\n");

     printf("\nEnter your choice : ");
     scanf("%d", &ch);
     switch (ch)
     {
	case 1: printf("\nEnter number of students : ");
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
		   first=insert_front(first);
		}
		break;
        
        
    case 2: display(first);
		break;       

	case 3:  exit(0);
		 break;
	default: printf("Wrong Choice: Please Select options from list\n");

     }//end of switch

   } //end of for

} //end of main
