#include<iostream.h>
#include<conio.h>
void main()
{
	int r,c;
	clrscr();
	int x =5;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			cout<<x;
		}
		x-=1;
		cout<<endl;
	}
getch();
}