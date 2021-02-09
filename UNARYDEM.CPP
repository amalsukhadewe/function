#include<iostream.h>
#include<conio.h>

class open
{
	public:
	void operator+()
	{
		cout<<"\n"<<"called";
	}
};

void main()
{
	clrscr();
	open z;
	+z;
	+z;
	getch();
}