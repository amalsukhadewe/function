#include<iostream.h>
#include<conio.h>

class areaoftriangle
{
public:
	int a,b,c;

void aot()
{
	int a=100,b=20;
	c=(a*b)/2;
	cout<<"the area of triangle is " <<c;
}
};

void main()
{
	clrscr();
	areaoftriangle z;
	z.aot();

	getch();
}
