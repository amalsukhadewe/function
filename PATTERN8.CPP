#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
	for(j=5;j>=1;j--)
	{
		if( j>i)
		{
			cout<<' ';
		}
		else
		{
			char z=64+i;
			cout<<z;
		}
	}
	cout<<endl;
}
getch();
}