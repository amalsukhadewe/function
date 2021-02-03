#include<iostream.h>
#include<conio.h>
int div(int x,int y);
void main()
{
clrscr();
div(100,20);
div(200,12);

getch();
}
int div(int x,int y)
{
	int z;
	z=x/y;
	cout<<"\n"<<z;
	return z;
}