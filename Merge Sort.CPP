//Merge Sort
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[5],b[5],c[10],i,j,k,temp;
	printf("Array 1\n");
	for(i=0;i<5;i++)
	{ printf("Enter an element:");
	  scanf("%d",&a[i]);
	}
	printf("Array 2\n");
	for(j=0;j<5;j++)
	{ printf("Enter an element:");
	  scanf("%d",&b[j]);
	}
	for(k=0;k<10;k++)
	{ if(k<5)
	  c[k]=a[k];
	  else
	  c[k]=b[k-5];
	}
	printf("Merging of Arrays\n");
	for(k=0;k<10;k++)
	{ printf("%d\t",c[k]);
	}
	printf("The sorted elements are\n");
	for(i=0;i<10;i++)
	{ for(j=0;j<10;j++)
	  { if(c[i]>c[j])
	    { temp=c[i];
	      c[i]=c[j];
	      c[j]=temp;
	    }
	  }
	}
	for(i=9;i>=0;i--)
	printf("%d\t",c[i]);
	getch();
}