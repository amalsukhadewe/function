#include<iostream.h>
#include<conio.h>
class pass
{
	int x,y,z;
	public:
	void passbyreference(int &x,int &y)
	{
		z=x;
		x=y;
		y=z;
	}
};
void main()
{
	clrscr();
	pass p;
	int a=10,b=20;
	cout<<"\n"<<a<<"\n"<<b;
	p.passbyreference(a,b);
	cout<<"\n"<<a<<"\n"<<b;
	getch();
}