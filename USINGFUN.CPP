#include<iostream.h>
#include<conio.h>
class one
{
	int a[5];
	public:
	void set();
	void display();
};
void one:: set()
{
	for(int i=0;i<=4;i++)
	{
		cin>>a[i];
	}
}
void one::display()
{
	for(int i=0;i<=4;i++)
	{
		cout<<a[i];
	}
}
void main()
{
	clrscr();
	one o;
	o.set();
	o.display();
	getch();
}


