//Creation,Insertion,Searching,Deletion,Traversing and replacing in Link list
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
void insertion()
{       struct node *q,*t,*r;
	int p,i;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&t->data);
	printf("Enter the position:");
	scanf("%d",&p);
	t->next=NULL;
	if(start==NULL)
	{ printf("No insertion ,empty link list\n");
	  return;
	}
	q=start;
	if(p==1)
	{ t->next=q;
	  start=t;
	  printf("Element successfully insert\n");
	}
	if(p>1)
	{ for(i=2;i<=p;i++)
	  { r=q;
	    q=q->next;
	  }
	  t->next=q;
	  r->next=t;
	  printf("Element successfully insert\n");
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
{       struct node *q,*r;
	int d;
	printf("Enter element for delete:");
	scanf("%d",&d);
	if(start==NULL)
	printf("Link is empty\n");
	else
	{ q=start;
	  while(q->data!=d)
	  {  r=q;
	     q=q->next;
	  }
	  if(q==NULL)
	  printf("Element not found");
	  else if(q==start)
	  { start=q->next;
	    printf("Element successfully delete\n");
	  }
	  else
	  { r->next=q->next;
	    printf("Element succesfully delete\n");
	  }
	}
}
void replace()
{	struct node *q,*r,*t;
	int item,p=1,i;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter element:");
	scanf("%d",&t->data);
	t->next=NULL;
	printf("Enter element for replace:");
	scanf("%d",&item);
	q=start;
	while(q->data!=item)
	{ q=q->next;
	  p++;
	  if(q==NULL)
	  break;
	}
	if(q==NULL)
	printf("Element not found for such replacement\n");
	else
	{ q=start;
	  for(i=1;i<p;i++)
	  { r=q;
	    q=q->next;
	  }
	  t->next=q->next;
	  r->next=t;
	  printf("Element successfully replace\n");
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
	while(x!=7)
	{ printf("Enter choice");
	  printf("\n1.Creation 2.Insertion 3.Searching 4.Delete 5.Replace 6.Traversing 7.Exit\n");
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
	    case 5: replace();
		    break;
	    case 6: traverse();
		    break;
	    case 7: break;
	   default: printf("Wrong choice\n");
		    break;
	  }
	}
	getch();
}
