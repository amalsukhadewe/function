#include<iostream.h>
#include<conio.h>
int saoc(int x,int y,int z);
void main()
{
clrscr();
saoc(10,20,3);
saoc(20,30,4);

getch();
}
int saoc(int x,int y,int z)
{
	int z1;
	z1=2*x*y*z;
	cout<<"\n"<<z1;
	return z1;
}