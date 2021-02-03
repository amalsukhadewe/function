#include<iostream.h>
#include<conio.h>
int areaofsquare(int x);
void main()
{
clrscr();
areaofsquare(10);
areaofsquare(20);

getch();
}
int areaofsquare(int x)
{
	int z;
	z=x*x;
	cout<<"\n"<<z;
	return z;
}