#include<iostream.h>
#include<conio.h>
int saosphere(int x,int y);
void main()
{
clrscr();
saosphere(10,20);
saosphere(20,30);

getch();
}
int saosphere(int x,int y)
{
	int z1;
	z1=4*x*y*y;
	cout<<"\n"<<z1;
	return z1;
}