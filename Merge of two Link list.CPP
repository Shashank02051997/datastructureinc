//Merge of two Link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data;
	struct node *next;
};
struct node *start=NULL;
void Link_list_1()
{	struct node *q,*t;
	int i;
	printf("Link List 1\n");
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
void Link_list_2()
{       struct node *q,*t,*p=NULL;
	int i;
	printf("Link List 2\n");
	for(i=1;i<6;i++)
	{ t=(struct node*)malloc(sizeof(struct node));
	  printf("Enter an element:");
	  scanf("%d",&t->data);
	  t->next=NULL;
	  if(p==NULL)
	  p=t;
	  else
	  q=p;
	  while(q->next!=NULL)
	  q=q->next;
	  q->next=t;
	}
}
void merge()
{	struct node *q,*p;
	q=start;
	while(q->next!=NULL)
	q=q->next;
	if(q->next==NULL)
	q->next=p;
}
void merge_display()
{	struct node *q;
	int i;
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ printf("Merge of two link list\n");
	  q=start;
	  for(i=1;i<10;i++)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d\n",q->data);
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
	int i;
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ printf("Elements in accending order\n");
	  q=start;
	  for(i=1;i<10;i++)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d\n",q->data);
	}
}
void main()
{	clrscr();
	Link_list_1();
	Link_list_2();
	merge();
	merge_display();
	sorted();
	display();
	getch();
}