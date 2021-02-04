#include<iostream.h>
#include<conio.h>

class sub
{
public:
	int a,b,c;

void add()
{
	int a=100,b=20;
	c=a/b;
	cout<<"the division is " <<c;
}
};

void main()
{
	clrscr();
	sub z;
	z.add();

	getch();
}
