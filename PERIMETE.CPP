#include<iostream.h>
#include<conio.h>
int pop(void);
void main()
{
clrscr();
pop();
pop();


getch();
}
int pop(void)
{
	int x=10,y=20,z1;
	z1=2*(x+y);
	cout<<"\n"<<z1;
	return z1;
}