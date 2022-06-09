// Linked List Program.
// Problem in 8th case.

#include<stdio.h>
#include<conio.h>
typedef struct lklist
{
  int info;
  struct lklist *next;
}node;             // Node contain two part one is info, another is address of next node.
void main()
{
  int ch,data,search_element,item;
  node *head=NULL,*temp,*ptr=NULL,*del;
  clrscr();
  while(1)
  {
	printf("\n\n1. Insert Element at Beginning.\n");
	printf("2. Linked List Traversing\n");
	printf("3. Insert at End of Linked List\n");
	printf("4. Search an Element in Linked List\n");
	printf("5. Exit\n");
	printf("6. Delete Node from Beginning.\n");
	printf("7. Delete Last Node.\n");
	printf("8. Insert after Element\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
	   printf("Enter Element to be insert: ");
	   scanf("%d",&data);
	   temp=(node *)malloc(sizeof(node));
	   if(temp==NULL)
		 printf("No Memory Available");
	   temp->info=data;
	   if(head!=NULL)
	   {
		 temp->next=head;
	   }
	   else
	   {
		 temp->next=NULL;
	   }
	   head=temp;
	   break;
	  case 2:
	   temp=head;
	   while(temp!=NULL)
	   {
		 printf("%d ",temp->info);
		 temp=temp->next;
	   }
	   break;
	  case 3:
	   ptr=head;
	   printf("Enter Element to be insert: ");
	   scanf("%d",&data);
	   temp=(node *)malloc(sizeof(node));
	   if(temp==NULL)
		 printf("No Memory Available");
	   temp->info=data;
	   while(ptr->next!=NULL)
	   {
		 ptr=ptr->next;
	   }
	   ptr->next=temp;
	   temp->next=NULL;
	   break;
	  case 4:
	   temp=head;
	   printf("Enter Data you want to Search: ");
	   scanf("%d",&search_element);
	   while(temp!=NULL)
	   {
		 if(search_element==temp->info)
		 {
		   printf("Element is present in this Linked List");
		   break;
		 }
		 else
		 {
		   temp=temp->next;
		 }
	   }
	   if(temp==NULL)
	   {
		 printf("Element Not Found in this Linked List");
	   }
	   break;

	  case 5:
	   exit(1);
	  case 6:
		   del=head;
		   head=head->next;
		   free(del);
		   break;
	  case 7:
		   del=head;
		   while((del -> next) -> next != NULL)
		   {
			 del=del->next;
		   }
		   free(del->next);
		   del->next=NULL;
		   break;
	  case 8:
		   printf("Enter Data after which you want to insert Node: ");
		   scanf("%d",&item);
		   printf("Enter Data you want to Insert: ");
		   scanf("%d",&data);
		   ptr=head;
		   while(ptr!=NULL)
		   {
			 if(ptr->info==item)
			 {
			   break;
			 }
		   }
		   if(ptr==NULL)
		   {
			 printf("Element not found in this List, so Insertion cannot be performed.");
			 break;
		   }
		   else
		   {
			 temp->info=data;
			 temp->next=ptr->next;
			 ptr->next=temp;
		   }


	}
  }
  getch();
}