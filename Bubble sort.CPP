//Bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[10],i,j,t;
	for(i=0;i<10;i++)
	{ printf("Enter element:");
	  scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{ for(j=0;j<10;j++)
	  { if(a[j]>a[j+1])
	    { t=a[j];
	      a[j]=a[j+1];
	      a[j+1]=t;
	    }
	  }
	}
	printf("The sorted elements are\n");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	getch();
}