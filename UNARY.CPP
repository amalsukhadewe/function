#include<iostream.h>
#include<conio.h>
class operation
{
	public:
		int a,b;
	void operator-()
	{
		a=-a;
		b=-b;
	}
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a="<<a<<","<<"b="<<b<<endl;
	}
};
void main()
{
	clrscr();
	operation z,z1;
	z1.set(11,22);
	z.set(10,20);

	-z,-z1;
	z.display();
	z1.display();
	getch();
}

