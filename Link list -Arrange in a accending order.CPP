//Link list -Arrange in a accending order
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
	for(i=1;i<11;i++)
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
void sorted()
{       struct node *p,*q,*r;
	int i,j;
	for(j=1;j<26;j++)
	{ q=start;
	  r=NULL;
	  for(i=1;i<10;i++)
	  { p=r;
	    r=q;
	    q=q->next;
	    if(i==1)
	    { if(q->data<r->data)
	      { start=q;
		r->next=q->next;
		q->next=r;
	      }
	    }
	    if(i>1)
	    { if(q->data<r->data)
	      { p->next=q;
		r->next=q->next;
		q->next=r;
	      }
	    }
	  }
	}
}
void display()
{	struct node *q;
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ printf("Elements in accending order\n");
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
	sorted();
	display();
	getch();
}