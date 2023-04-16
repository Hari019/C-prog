/*Given a File of N employee records with a set K of 
Keys(4-digit) which uniquely determine the records in file F.
Assume that file F is maintained in memory by a
Hash Table(HT) of m memory locations with L as the 
set of memory addresses (2-digit) of locations in HT. 
Let the keys in K and addresses in L are Integers.
Design and develop a Program in C that uses Hash 
function H: K ->L as H(K)=K mod m (remainder method), 
and implement hashing technique to map a given key K
to the address space L. Resolve the collision (if any) 
using linear probing.
*/

#include<string.h>
#include <stdio.h>
#define MAX 100

struct employee
{
  int id;
  char name[20];
  char des[20];
};
typedef struct employee EMP;
int a[MAX];
EMP emp[MAX];
EMP hash[MAX];
void linear_prob(int key, int j);
void getemp(int key,int j);
void display();

FILE *fp=NULL;

void main()
{
  int key,i,j,count;
  int ID;
  char NAME[20],DES[20];
  clrscr();
  fp=fopen("data1.txt", "r");
  printf("\n---HASHING TECHNIQUE WITH LINEAR PROBE---\n");
  for (i=0;i<MAX;i++)
  {
    a[i] = -1;   //create an empty records
  }

  i=0;
  while(!feof(fp))
  {
    fscanf(fp,"%d",&ID);
    fscanf(fp,"%s",NAME);
    fscanf(fp,"%s",DES);

    printf("%d\t%s\t%s\n",ID,NAME,DES);
    emp[i].id=ID;
    strcpy(emp[i].name,NAME);
    strcpy(emp[i].des,DES);
    i++;
  }

  count = i; // number of records present in the file
  for(j=0; j<count; j++)
  {
    key=emp[j].id % 100;
    linear_prob(key,j);
  }
  display();
}
void getemp(int key,int j)
{
   hash[key].id=emp[j].id;
   strcpy(hash[key].name, emp[j].name);
   strcpy(hash[key].des, emp[j].des);

}

void linear_prob(int key,int j)
{
 int flag, i, count=0;
 flag=0;
 if(a[key]== -1)// check whether it is a empty record
 {
   getemp(key,j);
   a[key] = key ;
 }
 else
 {
   printf("\nCollision Detected...!!!\n");
   i=0;
   while(i<MAX)
   {
     if(a[i]!=-1)count++;
     i++;
   }
   printf("\nCollision successfully handled using LINEAR PROBING\n");
   if(count == MAX)
   {
     printf("\n Hash table is full");
     display();
     exit(0);
   }
   for(i=key+1; i<MAX; i++)
     if(a[i] == -1)
     {
       a[i] = key;
       getemp(key+1,j);
       flag =1;
       break;
     }

     i=0;
     while((i<key) && (flag==0))
     {
	if(a[i] == -1)
	{
	  a[i] = key;
	  getemp(key+1,j);
	  flag=1;
	  break;
	}
	i++;
     }
  }
}

void display()
{
  int i,ch;
  for(;;)
  {
  printf("\n\n 1: DISPLAY ALL\n 2: FILTERED DISPLAY\n 3: EXIT\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("\n        HASH TABLE         \n");
	   printf("\nINDEX KEY\tEMPID\tNAME\tDESIGNATION\n");
	   for(i=0; i<MAX; i++)
	   printf("\n [%2d]\t%2d   %4d\t %-10s %-10s ", i,a[i],hash[i].id,hash[i].name,hash[i].des);
	   break;
   case 2: printf("\n        HASH TABLE         \n");
	   printf("---------------------------------------------");
	   printf("\nINDEX  KEY  EMPID  NAME\t    DESIGNATION\n");
	   printf("---------------------------------------------");
	   for(i=0; i<MAX; i++)
	   if(a[i]!=-1)
	   {
	      printf("\n [%2d]\t%2d  %4d  %-10s %-10s ", i, a[i],hash[i].id,hash[i].name,hash[i].des);
	      continue;
	   }
	   break;
   default:exit(0);
  } //end of switch
 }//end of for
}
