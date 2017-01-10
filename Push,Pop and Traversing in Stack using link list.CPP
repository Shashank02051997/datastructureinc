//Push,Pop and Traversing in Stack using link list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{	int data;
	struct node *next;
};
struct node *top=NULL;
void push()
{	struct node *q,*t;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element:");
	scanf("%d",&t->data);
	t->next=NULL;
	if(top==NULL)
	top=t;
	else
	{ t->next=top;
	  top=t;
	}
}
void pop()
{       struct node *t;
	if(top==NULL)
	printf("Stack is empty");
	else
	{ t=top;
	  top=top->next;
	  printf("Element successfully deleted %d",t->data);
       }
       printf("\n");
}
void traverse()
{       struct node *q;
	if(top==NULL)
	printf("Stack is empty\n");
	else
	{ q=top;
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
	  printf("\n1.Push\n2.Pop\n3.Traversing\n4.Exit\n");
	  scanf("%d",&x);
	  switch(x)
	  { case 1: push();
		    break;
	    case 2: pop();
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
