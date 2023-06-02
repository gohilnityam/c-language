#include<stdio.h>
#include<conio.h>
main()
{
    int unit,bill,a;
    clrscr();
    printf("enter electricity bill");
    scanf("%f",&unit);
    if(unit<50.0 && unit>=0.0)
    {
	bill=unit*0.5;
    }
    else if (unit<=150 && unit>50)
    {
	bill=unit*0.75+25;
    }
    else if (unit<=250 && unit>150)
    {
	bill=unit*1.2+100;
    }
    else if (unit>250)
    {
	bill=unit*1.5+220;
    }
    else
    {
	printf("invaild elcetricity unit");
    }
    a=bill*20/100+bill;
    printf("elcetricity bill =%d",a);
    getch();
}