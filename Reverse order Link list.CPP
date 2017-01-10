//Reverse order Link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data;
	struct node *next;
};
struct node *start=NULL;
void creation()
{	struct node *q,*t;
	int i;
	for(i=1;i<6;i++)
	{ t=(struct node*)malloc(sizeof(struct node));
	  printf("Enter an element:");
	  scanf("%d",&t->data);
	  t->next=NULL;
	  if(start==NULL)
	  start=t;
	  else
	  q=start;
	  while(q->next!=NULL)
	  q=q->next;
	  q->next=t;
	}
}
void reverse()
{       struct node *p=NULL,*q,*r;
	int i,j;
	for(j=5;j>=1;j--)
	{ q=start;
	  for(i=1;i<j;i++)
	  { r=q;
	    q=q->next;
	  }
	  if(j==5)
	  { p=q;
	    q->next=r;
	  }
	  if(j>1&&j<5)
	  { q->next=r;
	  }
	  if(j==1)
	  { q=start;
	    q->next=NULL;
	    start=p;
	  }
	 }
}
void display()
{	struct node *q;
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ printf("Elements in reverse order\n");
	  q=start;
	  while(q->next!=NULL)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d\n",q->data);
	}
}
void main()
{	clrscr();
	creation();
	reverse();
	display();
	getch();
}
