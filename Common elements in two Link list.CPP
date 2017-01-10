//Common elements in two Link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data,input;
	struct node *next;
};
struct node *start1=NULL,*start2=NULL;
void Link_list_1()
{	struct node *q,*t;
	int i;
	printf("Link List 1\n");
	for(i=1;i<6;i++)
	{ t=(struct node*)malloc(sizeof(struct node));
	  printf("Enter an element:");
	  scanf("%d",&t->data);
	  t->next=NULL;
	  if(start1==NULL)
	  start1=t;
	  else
	  { q=start1;
	    while(q->next!=NULL)
	    q=q->next;
	    q->next=t;
	  }
	}
}
void Link_list_2()
{       struct node *p,*u;
	int i;
	printf("Link List 2\n");
	for(i=1;i<6;i++)
	{ u=(struct node*)malloc(sizeof(struct node));
	  printf("Enter an element:");
	  scanf("%d",&u->data);
	  u->next=NULL;
	  if(start2==NULL)
	  start2=u;
	  else
	  { p=start2;
	    while(p->next!=NULL)
	    p=p->next;
	    p->next=u;
	  }
	}
}
void traverse1()
{	struct node *q;
	int i;
	if(start1==NULL)
	printf("Link is empty\n");
	else
	{ printf("Traversing 1\n");
	  q=start1;
	  while(q->next!=NULL)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d",q->data);
	}
}
void traverse2()
{	struct node *r;
	int i;
	if(start2==NULL)
	printf("Link is empty\n");
	else
	{ printf("\nTraversing 2\n");
	  r=start2;
	  while(r->next!=0)
	  {  printf("%d\t",r->data);
	     r=r->next;
	  }
	  printf("%d\n",r->data);
	}
}
void common()
{	struct node *q,*r;
	int c=0;
	printf("Common elements in two link list are\n");
	r=start2;
	while(r!=NULL)
	{ q=start1;
	  while(q!=NULL)
	  { if(q->data==r->data)
	    { printf("%d\t",q->data);
	      c++;
	    }
	    q=q->next;
	  }
	  r=r->next;
	}
	if(c==0)
	printf("No common element found");
}
void main()
{	clrscr();
	Link_list_1();
	Link_list_2();
	traverse1();
	traverse2();
	common();
	getch();
}