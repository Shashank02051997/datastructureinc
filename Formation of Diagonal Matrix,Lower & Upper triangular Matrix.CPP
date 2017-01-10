//Formation of Diagonal Matrix,Lower & Upper triangular Matrix
#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a[3][3],i,j,x;
	for(i=0;i<3;i++)
	{ for(j=0;j<3;j++)
	  { printf("Enter an element:");
	    scanf("%d",&a[i][j]);
	  }
	}
	printf("Press 1 for Diagonal Matrix\n");
	printf("Press 2 for Lower triangular Matrix\n");
	printf("Press 3 for Upper triangular Matrix\n");
	printf("Enter your choice:");
	scanf("%d",&x);
	switch(x)
	{ case 1: printf("The Diagonal Matrix is -\n");
		  for(i=0;i<3;i++)
		  { for(j=0;j<3;j++)
		    { if(i==j)
		      printf("%d\t",a[i][j]);
		      else
		      printf("0\t");
		    }
		    printf("\n");
		  }
		  break;
	  case 2: printf("The Lower triangular Matrix is -\n");
		  for(i=0;i<3;i++)
		  { for(j=0;j<3;j++)
		    { if(i>=j)
		      printf("%d\t",a[i][j]);
		      else
		      printf("0\t");
		    }
		    printf("\n");
		  }
		  break;
	  case 3: printf("The Upper triangular Matrix is -\n");
		  for(i=0;i<3;i++)
		  { for(j=0;j<3;j++)
		    { if(i<=j)
		      printf("%d\t",a[i][j]);
		      else
		      printf("0\t");
		    }
		    printf("\n");
		  }
		  break;
	 default: printf("Wrong input");
	}
	getch();
}