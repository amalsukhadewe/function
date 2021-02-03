#include<iostream.h>
#include<conio.h>
void add(void);
void mul(void);
void sub(void);
void divi(void);
void areaoftriangle(void);
void areaofsquare(void);
void areaofrectangle(void);
void areaoftrapezoid(void);
void areaofcircle(void);
void perimeterofsquare(void);
void surfaceareaofcube(void);
void surfaceareaofcylinder(void);
void surfaceareaofcone(void);
void surfaceareaofsphere(void);
void main()
{
	clrscr();
	add();
	mul();
	sub();
	divi();
	areaoftriangle();
	areaofsquare();
	areaofrectangle();
	areaoftrapezoid();
	areaofcircle();
	perimeterofsquare();

	surfaceareaofcube();
	surfaceareaofcylinder();
	surfaceareaofcone();
	surfaceareaofsphere();



	getch();
}
void add(void)
{
	int x=10,y=20,z;
	z=x+y;
	cout<<"\n the addition of x and y is="<<z;
}
void mul(void)
{
	int x=10,y=20,z;
	z=x*y;
	cout<<"\n the multiplication of x and y is="<<z;
}
void sub(void)
{
	int x=100,y=20,z;
	z=x-y;
	cout<<"\n the subtraction of x and y is="<<z;
}
void divi(void)
{
	int x=100,y=20,z;
	z=x/y;
	cout<<"\n the division of x and y is="<<z;
}
void areaoftriangle(void)
{
	int x=100,y=20,z;
	z=x*y/2;
	cout<<"\n the area of triangle is="<<z;
}
void perimeterofsquare(void)
{
	int x=100,z;
	z=x*4;
	cout<<"\n the perimeter of square is="<<z;
}
void areaofsquare(void)
{
	int x=100,z;
	z=x*x;
	cout<<"\n the area of square  is="<<z;
}
void areaofrectangle(void)
{
	int x=100,y=20,z;
	z=x*y;
	cout<<"\n the area of rectangle is="<<z;
}
void areaoftrapezoid(void)
{
	int x=100,y=20,z=20,s;
	s=(x+y)*z/2;
	cout<<"\n the area of trapezoid is="<<s;
}
void areaofcircle(void)
{
	int x=100,y=20,z;
	z=x*y*y;
	cout<<"\n the area of circle is="<<z;
}

void surfaceareaofcube(void)
{
	int x=10,z;
	z=6*x*x;
	cout<<"\n the surface area of cube is="<<z;
}
void surfaceareaofcylinder(void)
{
	int x=10,y=20,z=30,s;
	s=2*x*y*z;
	cout<<"\n the surface area of cylinder is="<<s;
}
void surfaceareaofcone(void)
{
	int x=10,y=20,z=30,s;
	s=x*y*z;
	cout<<"\n the surface area of cone is="<<s;
}
void surfaceareaofsphere(void)
{
	int x=100,y=20,z;
	z=4*x*y*y;
	cout<<"\n the surface area of sphere is="<<z;
}