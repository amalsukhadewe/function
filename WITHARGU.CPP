#include<iostream.h>
#include<conio.h>
int add(int x, int y);
void main()
{
clrscr();
add(10,20);
add(11,22);
getch();
}
int add(int x ,int y)
{
	int z;
	z=x+y;
	cout<<"\n"<<z;
	return z;
}