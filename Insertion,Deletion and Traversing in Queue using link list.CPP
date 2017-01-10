//Insertion,Deletion and Traversing in Queue using link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
void insertion()
{	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&t->data);
	t->next=NULL;
	if(front==NULL)
	{ front=t;
	  rear=t;
	}
	else
	{ rear->next=t;
	  rear=t;
	}
}
void deletion()
{       struct node *t;
	if(front==NULL&&rear==NULL)
	{ printf("Queue is empty\n");
	  return;
	}
	if(front==rear)
	{ t=front;
	  front=NULL;
	  rear=NULL;
	  printf("Element successfully deleted %d",t->data);
	}
	else
	{ t=front;
	  front=front->next;
	  printf("Element successfully deleted %d",t->data);
	}
	printf("\n");
}
void traverse()
{       struct node *q;
	if(front==NULL)
	printf("Queue is empty\n");
	else
	{ q=front;
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
	while(x!=4)
	{ printf("Enter choice");
	  printf("\n1.Insertion\n2.Deletion\n3.Traversing\n4.Exit\n");
	  scanf("%d",&x);
	  switch(x)
	  { case 1: insertion();
		    break;
	    case 2: deletion();
		    break;
	    case 3: traverse();
		    break;
	    case 4: break;
	   default: printf("Wrong choice\n");
		    break;
	  }
	}
	getch();
}
