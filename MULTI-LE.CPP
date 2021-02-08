#include<iostream.h>
#include<conio.h>
class addition
{
	public:
		int a,b,c;

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
	public:

		void add1()
		{
			c=a+b;
		}

};
class sum1:public sum
{
	public:
			void display()
		{
			cout<<"\n the addition of two number="<<c;
		}

};
void main()
{
	clrscr();
	sum1 a;
	a.add();
	a.add1();
	a.display();
	getch();
}
