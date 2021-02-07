#include<iostream.h>
#include<conio.h>
class copy
{
	private:
		int x,y;
	public:
		copy(int x1, int y1)
		{
			x=x1;
			y=y1;
		}
		copy(const copy &c2)
		{
			x=c2.x;
			y=c2.y;
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}



};
void main()
{
	clrscr();
	copy c1(10,20);
	copy c2=c1;
	cout<<"normal constructor:";
	c1.display();
	cout<<"copy constructor:";
	c2.display();

	getch ();
}