/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int a[20];
int n, val, i, pos;
void display ();
void insert ();
void delete ();
void create ();
void main ()
{
  int choice;
  while (choice)
    {
      printf ("\n---------menu----------\n ");
      printf ("1.create\n");
      printf ("2.display\n");
      printf ("3.insert\n");
      printf ("4.delete\n");
      printf ("5.Exit");
      printf ("Enter your choice");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  create ();
	  break;
	case 2:
	  display ();
	  break;
	case 3:
	  insert ();
	  break;
	case 4:
	  delete ();
	  break;
	  // case 5:exit(0);
	  break;
	default:
	  printf ("Invalid ");
	  break;
// 	  getch ();
	}

    }
//   getch ();
 
}

void
create ()
{
  printf ("\n enter size of array");
  scanf ("%d", &n);
  printf ("\nenter the elements of array");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
}

void
display ()
{
  if (n == 0)
    {
      printf ("no elements are to be displayed\n");
    //   getch ();
      return;

    }
  printf ("the elements are:\n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d\t", a[i]);
    }
//   getch ();

}

void
insert ()
{
  printf ("Enter position:\n");
  scanf ("%d", &pos);
  printf ("Enter the elements to inserted\n");
  scanf ("%d", &val);
  if (pos > n)
    {
      printf ("invalid Size of array is%d", n);
    }
    for (int i = n - 1; i >= pos; i--)
	{
	  /* code */
	  a[i + 1] = a[i];
	}
      a[pos] = val;
      n = n + 1;
    

}

void
delete ()
{
  printf ("\n Enter the position of element to be deleted\n");
  scanf ("%d", &pos);
  val = a[pos];
  if (pos > n)
    {
      printf ("invalid sixe of array");
    }
  for (int i = pos; i < n - 1; i++)
    {
      a[i] = a[i + 1];

    }
  n = n - 1;
  printf ("\n The deleted element is %d", val);
//   getch ();
}
