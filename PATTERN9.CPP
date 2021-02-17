#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=4;i++)
	{
	for(j=1;j<=7;j++)
	{
		if( j==4&& i==1 || i==2 &&j==3||i==2&&j==5||i==3&&j==2||i==3&&j==4||i==3&&j==6||i==4&&j==1||i==4&&j==3||i==4&&j==5||i==4&&j==7)
		{
			cout<<'*';
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