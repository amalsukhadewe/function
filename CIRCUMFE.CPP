#include<iostream.h>
#include<conio.h>
int coc(int x);
void main()
{
clrscr();
coc(10);
coc(20);

getch();
}
int coc(int x)
{
	int z1;
	z1=2*3.14*x;
	cout<<"\n"<<z1;
	return z1;
}