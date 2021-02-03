#include<iostream.h>
#include<conio.h>
void add(int a,int b);
void mul(int a,int b);
void sub(int a,int b);
void div(int a,int b);
void areaoftriangle(int a,int b);
void perimeterofsqaure(int a,int b);
void areaofsquare(int a,int b);
void areaofrectangle(int a,int b);
void areaoftrapezoid(int a,int b);
void areaofcircle(int a,int b);
void surfaceareaofcube(int a,int b);
void surfaceareaofcylinder(int a,int b);
void surfaceareaofcone(int a,int b);
void surfaceareaofsphere(int a,int b);


void main()
{
	clrscr();
	add(10,20);
	mul(10,20);
	sub(10,20);
	div(10,20);
	areaoftriangle(10,20);
	perimeterofsqaure(10,20);
	areaofsquare(10,20);
	areaofrectangle(10,20);
	areaoftrapezoid(10,20);
	areaofcircle(10,20);
	surfaceareaofcube(10,20);
	surfaceareaofcylinder(10,20);
	surfaceareaofcone(10,20);
	surfaceareaofsphere(10,20);
getch();
}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"\n the addition is="<<c;
}

void mul(int a,int b)
{
	int c;
	c=a*b;
	cout<<"\n the multiplication is="<<c;
}
void sub(int a,int b)
{
	int c;
	c=b-a;
	cout<<"\n the subtraction is="<<c;
}

void div(int a,int b)
{
	int c;
	c=b/a;
	cout<<"\n the division is="<<c;
}
void areaoftriangle(int a,int b)
{
	int c;
	c=a*b/2;
	cout<<"\n the area of triangle is="<<c;
}
void perimeterofsqaure(int a,int b)
{
	b=4*a;
	cout<<"\n the perimeter of square is="<<b;
 }

void areaofsquare(int a,int b)
{
	b=a*a;
	cout<<"\n the area of square is="<<b;
}
void areaofrectangle(int a,int b)
{
	int c;
	c=a*b;
	cout<<"\n the area of rectangle is="<<c;
}
void areaoftrapezoid(int a,int b)
{
	int c=30,d;
	d=(a+b)*c/2;
	cout<<"\n the area of trapezoid is="<<d;
}
void areaofcircle(int a,int b)
{
	int c;
	c=a*b*b;
	cout<<"\n the area of circle is="<<c;
}
void surfaceareaofcube(int a,int b)
{
	b=6*a*a;
	cout<<"\n the surface area of cube="<<b;
}

void surfaceareaofcylinder(int a,int b)
{
	int c=30,d;
	d=2*a*b*c;
	cout<<"\n the surface area of cylinder="<<d;
}
void surfaceareaofcone(int a,int b)
{
	int c=30,d;
	d=a*b*c;
	cout<<"\n the surface area of cone="<<d;
}
void surfaceareaofsphere(int a,int b)
{
	int c;
	c=4*a*b*b;
	cout<<"\n the surface area of sphere="<<c;
}