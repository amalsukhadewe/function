#include<iostream.h>
#include<conio.h>
class addition
{

	public:
	addition()
	{
		int a=10,b=20,c;
		 c=a+b;
		cout<<"the addition of two number= "<<c<<endl;
	}

};
class multiplication
{
	public:
	multiplication()
	{
		int a=10,b=20,c;
		c=a*b;
		cout<<"\n the multiplication of two number="<<c<<endl;
	}
};
class sub
{
	public:
	sub()
	{
		int a=100,b=20,c;
		c=a-b;
		cout<<"\n the subtraction of two number is="<<c<<endl;
	}
};
void main()
{
	clrscr();
	addition c ;
	multiplication d;
	sub e;
	getch();
}

