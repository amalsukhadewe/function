#include<iostream.h>
#include<conio.h>
int saocone(int x,int y,int z);
void main()
{
clrscr();
saocone(10,20,3);
saocone(20,30,4);

getch();
}
int saocone(int x,int y,int z)
{
	int z1;
	z1=x*y*z;
	cout<<"\n"<<z1;
	return z1;
}