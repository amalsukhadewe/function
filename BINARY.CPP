#include<iostream.h>
#include<conio.h>
class binary
{
	public:
	int a,b;
void set(int x,int y)
{
	a=x;
	b=y;
}
void operator +(binary cob2)
{

	int c=a+cob2.a;
	int d=b+cob2.b;
	cout<<"c="<<c<<","<<"d="<<d<<endl;
}
void dis()
{
  cout<<"a="<<a<<","<<"b="<<b<<endl;
}
};
void main()
{
	clrscr();
	binary z,z1,z2;

	z.set(10,20);
	z1.set(11,22);
	z.dis();
	z1.dis();

	z+z1;
	getch();
}

