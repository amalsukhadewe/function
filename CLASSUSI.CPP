#include<iostream.h>
#include<conio.h>
class addition
{
	public:
	void add(int,int);
	void add(int,int,int);
	void add(int,int,int,int);
	void print();
};

void addition:: add(int a,int b)
	{
		cout<<"\n"<<a+b;
	}
void addition:: add(int a,int b,int c)
	{
		cout<<"\n"<<a+b+c;
	}
void addition::add(int a,int b,int c,int d)
	{
		cout<<"\n"<<a+b+c+d;
	}

void main()
{
	clrscr();
	addition a;
	a.add(10,20);
	a.add(11,22,33);
	a.add(10,22,20,11);
	getch();
}