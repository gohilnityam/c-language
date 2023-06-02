#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("enter starting year :")
	scanf("%d",&i);
	printf("enter ending year :");
	scanf("%d",&n);
	while (i<=n)
	{
		if(i%4==0)
		{
			printf("%d",i);
		}
		i++;
	}
	getch();
}