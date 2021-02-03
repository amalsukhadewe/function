#include<iostream.h>
#include<conio.h>
int mul(int x, int y);
void main()
{
clrscr();
mul(100,20);
mul(110,22);
getch();
}
int mul(int x ,int y)
{
	int z;
	z=x*y;
	cout<<"\n"<<z;
	return z;
}