#include<iostream.h>
#include<conio.h>
#include<string.h>
class addition
{
	public:
		int a,b,c;
	addition(int x,int y)
	{
		a=x;
		b=y;
	}
	void add()
	{
		int c=a+b;
		cout<<"\n the addition of two number is="<<c;
	}
};
class multiplication
{
	public:
		float a,b,c;
	multiplication(float x,float y)
	{
		a=x;
		b=y;
	}
	void mul()
	{
		c=a*b;
		cout<<"\n the multiplication of two number is="<<c;
	}
};
void main()
{
	clrscr();
	addition a(10,20);
	a.add();
	multiplication m(10.1,12.4);
	m.mul();
	getch();
}

