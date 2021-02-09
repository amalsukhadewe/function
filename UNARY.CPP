#include<iostream.h>
#include<conio.h>

class open
{
	public:
	int a,b,c;
	void get()
	{
	  cout<<"\n enter two number=";
	  cin>>a>>b;
	}
	void operator-()
	{
		a=--a;
		b=--b;


	}
	void display()
	{
		cout<<"\n a="<<a<<","<<"\n b="<<b<<endl;
	}
};

void main()
{
	clrscr();
	open z;
	z.get();
	-z;
	z.display();

	getch();
}