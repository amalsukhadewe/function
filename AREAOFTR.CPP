#include<iostream.h>
#include<conio.h>
int areaoftriangle(int x,int y);
void main()
{
clrscr();
areaoftriangle(10,20);
areaoftriangle(20,12);

getch();
}
int areaoftriangle(int x,int y)
{
	int z;
	z=x*y/2;
	cout<<"\n"<<z;
	return z;
}