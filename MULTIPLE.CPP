#include<iostream.h>
#include<conio.h>
class addition
{
	protected:
		int a;
	public:
		void add()
		{
			cout<<"\n enter first number=";
			cin>>a;

		}
};
class sum
{
	protected:
		int b;
	public:

		void add1()
		{
			cout<<"\n enter second number=";
			cin>>b;
		}

};
class sum1:public sum,public addition
{
	private:
		int c;
	public:
			void display()
		{
			c=a+b;
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
