#include<stdio.h>
#include<conio.h>

struct student
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
}s[100];

int main()
{
	int i,n;
	clrscr();
	printf("How many students is your class =  ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("Enter id = ");		scanf("%d",&s[i].id);   fflush(stdin);
		printf("Enter name = ");		scanf("%s",&s[i].name);        fflush(stdin);
		printf("Enter age = ");		scanf("%d",&s[i].age);                 fflush(stdin);
		printf("Enter course = ");		scanf("%s",&s[i].course);      fflush(stdin);
		printf("Enter city = ");		scanf("%s",&s[i].city);        fflush(stdin);
		printf("Enter std = ");		scanf("%d",&s[i].std);                 fflush(stdin);
		printf("Enter school = ");		scanf("%s",&s[i].school);
	}

	for(i=0; i<n; i++)
	{
		printf("%d  %s  %d  %s  %s  %d  %s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
	}



	getch();
}