#include<iostream.h>
#include<conio.h>
class addition
{
	protected:
		int a,b;
	public:
		void add()
		{
			cout<<"\n enter first number=";
			cin>>a;
			cout<<"\n enter second number=";
			cin>>b;
		}
};
class sum:public addition
{
	int c;
	public:
		void add1()
		{
			c=a+b;
		}
		void display()
		{
			cout<<"\n the addition of two number="<<c;
		}
};
void main()
{
	clrscr();
	sum a;
	a.add();
	a.add1();
	a.display();
	getch();
}
