//Backward and Forward movement of element in Link list
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
	t=(struct node*)malloc(sizeof(struct node));
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
void for_move()
{       struct node *q,*r;
	int d,c=1;
	if(start==NULL)
	{ printf("Link is empty\n");
	  return;
	}
	else
	{ printf("Enter element for move forward:");
	  scanf("%d",&d);
	  q=start;
	  while(q->data!=d&&q!=NULL)
	  {  r=q;
	     q=q->next;
	     c++;
	  }
	  if(q==NULL)
	  { printf("Element not found\n");
	    return;
	  }
	  if(q==start)
	  { start=q->next;
	  }
	  if(q!=start)
	  { r->next=q->next;
	  }
	}
	struct node *u,*t,*v;
	int p,i;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=d;
	if(q==NULL)
	printf("");
	else
	{ printf("Enter the position:");
	  scanf("%d",&p);
	}
	t->next=NULL;
	if(start==NULL)
	{ printf("No insertion ,empty link list\n");
	  return;
	}
	u=start;
	if(p>=1)
	{ for(i=1;i<c+p;i++)
	  { v=u;
	    u=u->next;
	  }
	  t->next=u;
	  v->next=t;
	}
}
void back_move()
{       struct node *q,*r;
	int d,c=1;
	if(start==NULL)
	{ printf("Link is empty\n");
	  return;
	}
	else
	{ printf("Enter element for move backward:");
	  scanf("%d",&d);
	  q=start;
	  while(q->data!=d&&q!=NULL)
	  {  r=q;
	     q=q->next;
	     c++;
	  }
	  if(q==NULL)
	  { printf("Element not found\n");
	    return;
	  }
	  if(q==start)
	  { start=q->next;
	  }
	  if(q!=start)
	  { r->next=q->next;
	  }
	}
	struct node *u,*t,*v;
	int p,i;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=d;
	if(q==NULL)
	printf("");
	else
	{ printf("Enter the position:");
	  scanf("%d",&p);
	}
	t->next=NULL;
	if(start==NULL)
	{ printf("No insertion ,empty link list\n");
	  return;
	}
	u=start;
	if(p>=1)
	{ for(i=1;i<c-p;i++)
	  { v=u;
	    u=u->next;
	  }
	  if(c-1!=p)
	  { t->next=u;
	    v->next=t;
	  }
	  else
	  { t->next=u;
	    start=t;
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
	while(x!=5)
	{ printf("Enter choice");
	  printf("\n1.Creation 2.Traversing 3.Forard Move 4.Backward Move 5.Exit\n");
	  scanf("%d",&x);
	  switch(x)
	  { case 1: creation();
		    break;
	    case 2: traverse();
		    break;
	    case 3: for_move();
		    break;
	    case 4: back_move();
		    break;
	    case 5: break;
	   default: printf("Wrong choice\n");
		    break;
	  }
	}
	getch();
}
