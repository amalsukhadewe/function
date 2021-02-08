#include<iostream.h>
#include<conio.h>
class addition
{
	public:
		int a;


};
class sum:public addition
{
	public:
		void add()
		{
			cout<<"\n enter first number=";
			cin>>a;
		}

};
class sum1
{
	public:
		int b;
		void display()
		{
			cout<<"\n enter second number=";
			cin>>b;
		}

};
class sum2:public sum,public sum1
{
	public:
		void show()
		{
			cout<<"\n the addition of two number="<<a+b;
		}

};
void main()
{
	clrscr();
	sum2 a;
	a.add();

	a.display();
	a.show();
	getch();
}
