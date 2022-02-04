#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum;
	sum=0;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("\n Sum: %d",sum);
	getch();
}
