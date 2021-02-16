#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
		if(j<=3 && j>=4-i)
		{
		cout<<i;
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