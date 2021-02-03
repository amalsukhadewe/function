#include<iostream.h>
#include<conio.h>
int areaoftra(int x,int y);
void main()
{
clrscr();
areaoftra(10,20);
areaoftra(20,30);

getch();
}
int areaoftra(int x,int y)
{
	int z1;
	z1=(x*y*y);
	cout<<"\n"<<z1;
	return z1;
}