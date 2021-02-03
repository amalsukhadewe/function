#include<iostream.h>
#include<conio.h>
int add(void);
void main()
{
clrscr();
add();
add();


getch();
}
int add(void)
{
	int x=10,y=20,z;
	z=x+y;
	cout<<"\n"<<z;
	return z;
}