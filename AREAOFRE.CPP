#include<iostream.h>
#include<conio.h>
int areaofrectangle(int x,int y);
void main()
{
clrscr();
areaofrectangle(10,20);
areaofrectangle(20,30);

getch();
}
int areaofrectangle(int x,int y)
{
	int z;
	z=x*y;
	cout<<"\n"<<z;
	return z;
}