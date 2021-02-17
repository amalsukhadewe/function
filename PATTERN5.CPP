#include<iostream.h>
#include<conio.h>
void main()
{
	int  i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
	for(j=1;j<=5;j++)
	{    if(j<=i)
		{
			char z=64+ i;
			cout<<z;
		}
		else
		{
			cout<<' ';
		}
	}
	cout<<endl;
}
getch();
}