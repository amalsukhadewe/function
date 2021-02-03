#include<iostream.h>
#include<conio.h>
int sub(void);
void main()
{
clrscr();
sub();
sub();


getch();
}
int sub(void)
{
	int x=10,y=20,z;
	z=y-x;
	cout<<"\n"<<z;
	return z;
}