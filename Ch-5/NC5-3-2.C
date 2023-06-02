#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum =1;
	clrscr();
	printf("enter any number :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum =sum*i;

	}
	printf("multi : %d",sum);
	getch();
}
