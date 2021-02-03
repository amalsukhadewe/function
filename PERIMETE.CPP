#include<iostream.h>
#include<conio.h>
int perimeterofsquare(int x);
void main()
{
clrscr();
perimeterofsquare(10);
perimeterofsquare(20);

getch();
}
int perimeterofsqaure(int x)
{
	int y;
	y=4*x;
	cout<<"\n"<<y;
	return y;
}