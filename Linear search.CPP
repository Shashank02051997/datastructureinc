//Linear search
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],i,c=0,n;
	for(i=0;i<10;i++)
	{ printf("Enter an element: ");
	  scanf("%d",&a[i]);
	}
	printf("Enter an element for search: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{ if(a[i]==n)
	  { printf("The first occurence of number %d is found at %d",n,i+1);
	    c=1;
	    break;
	  }
	}
	if(c==0)
	printf("Element not found");
	getch();
}


