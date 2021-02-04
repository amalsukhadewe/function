#include<stdio.h>
#include<conio.h>
void main()
{
	float p,i,t,si;
	clrscr();
	printf("\n enter the principle value=");
	scanf("%f",&p);
	printf("\n enter the rate of interest=");
	scanf("%f",&i);
	printf( "enter the time in years=");
	scanf("%f",&t);
	si=(p*i*t)/100;
	printf("the simple interest is=%f",si);
	getch();
}