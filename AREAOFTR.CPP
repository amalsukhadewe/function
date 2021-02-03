#include<iostream.h>
#include<conio.h>
int areaoftra(int x,int y,int z);
void main()
{
clrscr();
areaoftra(10,20,30);
areaoftra(20,30,40);

getch();
}
int areaoftra(int x,int y,int z)
{
	int z1;
	z1=(x+y)*z/2;
	cout<<"\n"<<z1;
	return z1;
}