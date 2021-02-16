#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=6;i++)
	{
	for(j=1;j<=5;j++)
	{
		if(i==1 || j==1 || j==5 && i==3 || j==5 && i==2||j==2 && i==3 || j==4 && i==3 || j==2 && i==6 || j==3 && i==6 || j==2 && i==5)
		{
			cout<<'p';
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