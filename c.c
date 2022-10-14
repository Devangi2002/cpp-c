#include <stdio.h>
#include <stdlib.h>
struct ll
{
  int n;
  struct ll*next;
};
typedef struct ll o;
o *p;
void pr()
{
  o *k;
  while(p==NULL) 
  {
    printf("%d",k->n);
    k=k->next;
  }
}
void beg()
{
  pr();
}
void end()
{
  pr();
}
void main()
{
  int x,a,b;
  p=(o*)malloc(sizeof(o));
  printf("Enter the size of set");
  scanf("%d", &x);
  printf("Enter the set");
  for (int i = 0; i < x; ++i)
  {
    scanf("%d", &a);
    p->n=a;
    p->next=NULL;
  }
  printf("Enter \n1 to create a node in the begining\n2 to create a node at the end\n3 exit\n");
  scanf("%d", &b);
  switch (b)
  {
    case 1:
    beg(p);
    break;
    case 2:
    end(p);
    break;
    case 3:
    break;
  }
}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList() {
   struct node *ptr = head;
   printf("\n[ ");
	
   //start from the beginning
   while(ptr != NULL) {
      printf("(%d,%d) ",ptr->key,ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]");
}

//insert link at the first location
void insertFirst(int key, int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
	
   link->key = key;
   link->data = data;
	
   //point it to old first node
   link->next = head;
	
   //point first to new first node
   head = link;
}

//delete first item
struct node* deleteFirst() {

   //save reference to first link
   struct node *tempLink = head;
	
   //mark next to first link as first 
   head = head->next;
	
   //return the deleted link
   return tempLink;
}

//is list empty
bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;
	
   for(current = head; current != NULL; current = current->next) {
      length++;
   }
	
   return length;
}

//find a link with given key
struct node* find(int key) {

   //start from the first link
   struct node* current = head;

   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {
	
      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //go to next link
         current = current->next;
      }
   }      
	
   //if data found, return the current Link
   return current;
}

//delete a link with given key
struct node* delete(int key) {

   //start from the first link
   struct node* current = head;
   struct node* previous = NULL;
	
   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {

      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //store reference to current link
         previous = current;
         //move to next link
         current = current->next;
      }
   }

   //found a match, update the link
   if(current == head) {
      //change first to point to next link
      head = head->next;
   } else {
      //bypass the current link
      previous->next = current->next;
   }    
	
   return current;
}

void sort() {

   int i, j, k, tempKey, tempData;
   struct node *current;
   struct node *next;
	
   int size = length();
   k = size ;
	
   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      current = head;
      next = head->next;
		
      for ( j = 1 ; j < k ; j++ ) {   

         if ( current->data > next->data ) {
            tempData = current->data;
            current->data = next->data;
            next->data = tempData;

            tempKey = current->key;
            current->key = next->key;
            next->key = tempKey;
         }
			
         current = current->next;
         next = next->next;
      }
   }   
}

void reverse(struct node** head_ref) {
   struct node* prev   = NULL;
   struct node* current = *head_ref;
   struct node* next;
	
   while (current != NULL) {
      next  = current->next;
      current->next = prev;   
      prev = current;
      current = next;
   }
	
   *head_ref = prev;
}

void main() {
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56); 

   printf("Original List: "); 
	
   //print list
   printList();

   while(!isEmpty()) {            
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");
      printf("(%d,%d) ",temp->key,temp->data);
   }  
	
   printf("\nList after deleting all items: ");
   printList();
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);
   
   printf("\nRestored List: ");
   printList();
   printf("\n");  

   struct node *foundLink = find(4);
	
   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");  
   } else {
      printf("Element not found.");
   }

   delete(4);
   printf("List after deleting an item: ");
   printList();
   printf("\n");
   foundLink = find(4);
	
   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");
   } else {
      printf("Element not found.");
   }
	
   printf("\n");
   sort();
	
   printf("List after sorting the data: ");
   printList();
	
   reverse(&head);
   printf("\nList after reversing the data: ");
   printList();
}






#include<stdio.h>
#include <cstdlib>
int main()
{
   int **a,r,c;
   printf("enter no of r\n");
   scanf("%d",&r);
   printf("enter no of c\n");
   scanf("%d",&c);
   printf("enter the elements\n");
   a=(int**)malloc(sizeof(int*)*r);

   for(int i=0;i<r;i++)
         *(a+i)=(int*)malloc(sizeof(int)*c);

   for(int i=0;i<r;i++)
      for (int j=0;j<c;j++)
         scanf("%d\n",(a+i)+j);
printf("are the elements\n");
   for(int i=0;i<r;i++)
      for (int j=0;j<c;j++)
         printf("%d\n",*((a+i)+j));
      printf("\n");
}






#include <stdio.h>
#include <stdlib.h>
typedef struct emp
{
  int id;
  char ad[30];
  char name[10];
}e;

int main() 
{
  e*a;
  int n;
  printf("Enter the number of employee\n");
  scanf("%d", &n);
  a=(e*)malloc(n*sizeof(e));
  for (int i=0;i<n;++i) 
  {
    printf("Enter name employee @%d:\n",i+1);
    scanf("%s",(a+i)->name);
    printf("Enter id of the employee @%d:\n",i+1);
    scanf("%d", &(a+i)->id);
    printf("Enter adress of employee @%d:\n",i+1);
    scanf("%s",(a+i)->ad);
  }

  printf("employee details\n\n\n");
  for (int i = 0; i < n; ++i) 
  {
    printf("name of employee @%d=%s\n",i+1,(a+i)->name);
    printf("id of employee @%d=%d\n",i+1,(a+i)->id);
    printf("adress of employeet @%d=%s\n\n\n",i+1,(a+i)->ad);
  }
}







#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
  int rol;
  int c;
  char name[30];
}s;

int main() 
{
  s*a;
  int n;
  printf("Enter the number of students\n");
  scanf("%d", &n);
  a=(s*)malloc(n*sizeof(s));
  for (int i=0;i<n;++i) 
  {
    printf("Enter name of student @%d:\n",i+1);
    scanf("%s",(a+i)->name);
    printf("Enter rol of student @%d:\n",i+1);
    scanf("%d", &(a+i)->rol);
    printf("Enter class of student @%d:\n",i+1);
    scanf("%d",&(a+i)->c);
  }

  printf("student details\n");
  for (int i = 0; i < n; ++i) 
  {
    printf("name of student @%d=%s\n",i+1,(a+i)->name);
    printf("rol of student @%d=%d\n",i+1,(a+i)->rol);
    printf("class of student @%d=%d\n\n\n",i+1,(a+i)->c);
  }
}




#include<stdio.h>
#include <cstdlib>
int main()
{
   int *a,s,su=0;
   printf("enter no of elements\n");
   scanf("%d",&s);
   printf("enter the elements\n");
   a=(int *)malloc(sizeof (int) *s);
   for(int i=0;i<s;i++)
   {
      scanf("%d",a+i);
      su=su+*(a+i);
   }
      printf("sum = %d\n",su);
}








