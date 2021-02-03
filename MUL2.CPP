#include<iostream.h>
#include<conio.h>
int mul(void);
void main()
{
clrscr();
mul();
mul();


getch();
}
int mul(void)
{
	int x=10,y=20,z;
	z=x*y;
	cout<<"\n"<<z;
	return z;
}