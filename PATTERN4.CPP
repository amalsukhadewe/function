#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	char z;
	clrscr();
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
		if(j<=3 && j>=4-i)
		{        z=char (64+i);
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