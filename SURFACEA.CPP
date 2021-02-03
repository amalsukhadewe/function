#include<iostream.h>
#include<conio.h>
int saoc(int x);
void main()
{
clrscr();
saoc(10);
saoc(20);

getch();
}
int saoc(int x)
{
	int z1;
	z1=6*x*x;
	cout<<"\n"<<z1;
	return z1;
}