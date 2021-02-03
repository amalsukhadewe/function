#include<iostream.h>
#include<conio.h>
int sub(int x, int y);
void main()
{
clrscr();
sub(100,20);
sub(110,22);
getch();
}
int sub(int x ,int y)
{
	int z;
	z=x-y;
	cout<<"\n"<<z;
	return z;
}