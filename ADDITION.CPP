#include<iostream.h>
#include<conio.h>

class addition
{
public:
int a,b,c;

void add()
{
	int a=10,b=20;
	c=a+b;
}
void display()
{
cout<<"the addition is " <<c;
}
};

void main()
{
	clrscr();
	addition z;
	z.add();
	z.display();
	getch();
}