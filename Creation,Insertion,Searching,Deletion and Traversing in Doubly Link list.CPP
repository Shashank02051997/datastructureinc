//Creation,Insertion,Searching,Deletion and Traversing in Doubly Link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
struct node
{	int data;
	struct node *next;
	struct node *prev;
};
struct node *start=NULL;
void creation()
{	struct node *q,*t;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&t->data);
	t->next=NULL;
	t->prev=NULL;
	if(start==NULL)
	start=t;
	else
	{ q=start;
	  while(q->next!=NULL)
	  q=q->next;
	  q->next=t;
	  t->prev=q;
	}
}
void insertion()
{       struct node *q,*t,*r;
	int p,i;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&t->data);
	t->next=NULL;
	t->prev=NULL;
	printf("Enter the position:");
	scanf("%d",&p);
	if(start==NULL)
	{ printf("No insertion ,empty link list\n");
	  return;
	}
	q=start;
	if(p==1)
	{ t->next=q;
	  start=t;
	  q->prev=t;
	  printf("Element succesfully insert\n");
	}
	if(p>1)
	{ for(i=1;i<p;i++)
	  { r=q;
	    q=q->next;
	  }
	  t->next=q;
	  q->prev=t;
	  r->next=t;
	  t->prev=r;
	  printf("Element succesfully insert\n");
	}
}
void search()
{       struct node *q;
	int item,p=0;
	printf("Enter an element for search:");
	scanf("%d",&item);
	if(start==NULL)
	{ printf("No element for search\n");
	  return;
	}
	q=start;
	while(q->data!=item)
	{ q=q->next;
	  p++;
	  if(q==NULL)
	  break;
	}
	if(q==NULL)
	printf("Element not found\n");
	else
	printf("Element found at position %d\n",p+1);
}
void deletion()
{       struct node *q,*r=NULL,*p=NULL;
	int d,pos=1,i;
	printf("Enter element for delete:");
	scanf("%d",&d);
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ q=start;
	  while(q->data!=d)
	  { q=q->next;
	    pos++;
	    if(q==NULL)
	    { printf("Element not found\n");
	      break;
	    }
	  }
	  if(q!=NULL)
	  { q=start;
	    for(i=1;i<=pos;i++)
	    {  p=r;
	       r=q;
	       q=q->next;
	    }
	    if(p==NULL)
	    { start=r->next;
	      q->prev=NULL;
	    }
	    else
	    { p->next=r->next;
	      q->prev=r->prev;
	    }
	    printf("Element successfully delete\n");
	  }
	}
}
void traverse()
{       struct node *q;
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ q=start;
	  while(q->next!=NULL)
	  {  printf("%d\t",q->data);
	     q=q->next;
	  }
	  printf("%d\n",q->data);
	}
}
void main()
{	clrscr();
	int x;
	while(x!=6)
	{ printf("Enter choice");
	  printf("\n1.Creation 2.Insertion 3.Searching 4.Deletion 5.Traversing 6.Exit\n");
	  scanf("%d",&x);
	  switch(x)
	  { case 1: creation();
		    break;
	    case 2: insertion();
		    break;
	    case 3: search();
		    break;
	    case 4: deletion();
		    break;
	    case 5: traverse();
		    break;
	    case 6: break;
	   default: printf("Wrong choice\n");
		    break;
	  }
	}
	getch();
}
