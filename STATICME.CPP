#include<iostream.h>
#include<conio.h>
class addition
{
	private:
		static int a,b,c;
	public:
	static add()
	{
		 int c=a+b;
		cout<<"\n the addition of two number is="<<c;
	}
};
class division
{
	private:
		static int a,b,c;
	public:
	static div()
	{
		int c=a/b;
		cout<<"\n the division of two number is="<<c;
	}
};
int addition::a=10;
int addition::b=20;
int division::a=100;
int division::b=20;
void main()
{
	clrscr();
	addition a;//calling with object
	a.add();
	addition::add();//call without object
	division d;
	d.div();
	getch();
}
