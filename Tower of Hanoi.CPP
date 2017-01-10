//Tower of Hanoi
#include<stdio.h>
#include<conio.h>
void tower(char,char,char,int);
void tower(char peg1,char peg2,char peg3,int n)
{	if(n<=0)
	printf("\nIllegal entry");
	if(n==1)
	printf("\nMove Disk from %c to %c",peg1,peg3);
	else
	{ tower(peg1,peg3,peg2,n-1);
	  tower(peg1,peg2,peg3,1);
	  tower(peg2,peg1,peg3,n-1);
	}
}
void main()
{	int n;
	clrscr();
	printf("\n Input the number of discs:");
	scanf("%d",&n);
	printf("\nTower of Hanoi for %d DISC",n);
	tower('X','Y','Z',n);
	getch();
}