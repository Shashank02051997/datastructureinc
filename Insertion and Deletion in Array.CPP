//Insertion and Deletion in Array
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],i,x,p,n,d,b[10];
	for(i=1;i<=9;i++)
	{ printf("Enter an element=");
	  scanf("%d",&a[i]);
	}
	printf("Enter 1 for insertion and Enter 2 for deletion= ");
	scanf("%d",&x);
	printf("Position from 1 to 9 only\n");
	switch(x)
	{ case 1: printf("Enter Position=");
		  scanf("%d",&p);
		  if(p>=1&&p<=9)
		  { printf("Enter a no.=");
		    scanf("%d",&n);
		    printf("Array elements are after insertion");
		    for(i=1;i<=10;i++)
		    { if(i<p)
		      printf("\n%d",a[i]);
		      if(i==p)
		      { printf("\n%d",n);
			b[i+1]=a[i];
		      }
		      if(i>p)
		      { printf("\n%d",b[i]);
			b[i+1]=a[i];
		      }
		    }
		  }
		  else
		  printf("Wrong position input");
		  break;
	  case 2: printf("Enter Position=");
		  scanf("%d",&d);
		  if(p>=1&&p<=9)
		  { printf("Array elements are after deletion");
		    for(i=1;i<d;i++)
		    printf("\n%d",a[i]);
		    for(i=d+1;i<=9;i++)
		    printf("\n%d",a[i]);
		  }
		  else
		  printf("Wrong position input");
		  break;
	 default: printf("Wrong input");
	}
	getch();
}