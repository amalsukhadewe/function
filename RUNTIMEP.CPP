#include<iostream.h>
#include<conio.h>
#include<string.h>
class one
{
	public:
	void fun()
	{
		cout<<"\n hii this is amal...";

	}
};
void main()
{
	clrscr();
	one ob,*obpt;
	obpt=&ob;
	obpt-> fun();
	getch();
}