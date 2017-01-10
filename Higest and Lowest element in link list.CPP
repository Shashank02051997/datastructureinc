//Higest and Lowest element in link list
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
	  { q=start;
	    while(q->next!=NULL)
	    q=q->next;
	    q->next=t;
	  }
	}
}
void high()
{	struct node *q;
	int h;
	q=start;
	h=q->data;
	while(q!=NULL)
	{ if(h<q->data)
	  h=q->data;
	  q=q->next;
	}
	printf("Highest element=%d",h);
}
void low()
{	struct node *q;
	int l;
	q=start;
	l=q->data;
	while(q!=NULL)
	{ if(l>q->data)
	  l=q->data;
	  q=q->next;
	}
	printf("\nLowest element=%d",l);
}
void main()
{	clrscr();
	creation();
	high();
	low();
	getch();
}
