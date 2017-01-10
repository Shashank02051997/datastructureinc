//Separate even & odd numbers from link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data;
	struct node *next;
};
struct node *start1=NULL,*start2=NULL,*start3=NULL;
void creation()
{	struct node *q,*t,*j,*k,*p,*r;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&t->data);
	t->next=NULL;
	if(t->data%2==0)
	{ j=(struct node*)malloc(sizeof(struct node));
	  j->data=t->data;
	  j->next=NULL;
	  if(start2==NULL)
	  start2=j;
	  else
	  { r=start2;
	    while(r->next!=NULL)
	    r=r->next;
	    r->next=j;
	  }
	}
	else
	{ k=(struct node*)malloc(sizeof(struct node));
	  k->data=t->data;
	  k->next=NULL;
	  if(start3==NULL)
	  start3=k;
	  else
	  { p=start3;
	    while(p->next!=NULL)
	    p=p->next;
	    p->next=k;
	  }
	}
	if(start1==NULL)
	start1=t;
	else
	q=start1;
	while(q->next!=NULL)
	q=q->next;
	q->next=t;
}
void even()
{	struct node *q;
	printf("Even number link list\n");
	if(start2==NULL)
	printf("Link is empty\n");
	else
	{ q=start2;
	  while(q->next!=NULL)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d\n",q->data);
	}
}
void odd()
{       struct node *q;
	printf("Odd number link list\n");
	if(start3==NULL)
	printf("Link is empty\n");
	else
	{ q=start3;
	  while(q->next!=NULL)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d\n",q->data);
	}
}
void main()
{	clrscr();
	for(int i=1;i<11;i++)
	creation();
	even();
	odd();
	getch();
}