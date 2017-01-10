//Binary search
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],i,n,l=0,h=9,m;
	for(i=0;i<10;i++)
	{ printf("Enter an element: ");
	  scanf("%d",&a[i]);
	}
	printf("Enter an element for search: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{ if(h>=l)
	  { m=(h+l)/2;
	    if(a[m]==n)
	    { printf("Element %d is found at position= %d",n,m+1);
	      break;
	    }
	    else if(a[m]<n)
	    l=m+1;
	    else
	    h=m-1;
	  }
	  else
	  printf("Element is not found");
	}
	getch();
}


