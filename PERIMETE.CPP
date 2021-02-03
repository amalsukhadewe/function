#include<iostream.h>
#include<conio.h>
int pop(int x,int y);
void main()
{
clrscr();
pop(10,20);
pop(20,30);

getch();
}
int pop(int x,int y)
{
	int z1;
	z1=2*(x+y);
	cout<<"\n"<<z1;
	return z1;
}