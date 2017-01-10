//Push,Pop and Traversing using array in Stack
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int x,a[7],top=-1,item,i;
	while(x!=4)
	{ printf("Enter choice:");
	  printf("\n1.Push\n2.Pop\n3.Traversing\n4.Exit\n");
	  scanf("%d",&x);
	  switch(x)
	  { case 1: printf("Enter element for insert=");
		    scanf("%d",&item);
		    top=top+1;
		    if(top!=8)
		    { a[top]=item;
		      printf("Element successfully inserted\n");
		    }
		    else
		    printf("Stack is full\n");
		    break;
	    case 2: if(top==-1)
		    printf("Stack is empty\n");
		    else
		    { item=a[top];
		      top=top-1;
		      printf("Element deleted %d\n",item);
		    }
		    break;
	    case 3: if(top==-1)
		    printf("Stack is empty\n");
		    else
		    { printf("Stack elements are\n");
		      for(i=0;i<=top;i++)
		      printf("%d\t",a[i]);
		    }
		    printf("\n");
		    break;
	    case 4: break;
	   default: printf("Wrong choice\n");
		    break;
	  }
	}
	getch();
}
