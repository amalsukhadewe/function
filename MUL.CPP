#include<iostream.h>
#include<conio.h>

class multiplication
{

 int add(int a,int b){
  return a+b;
 }
}
void main()
{
	int y;
	clrscr();
	multiplication m;
	 y = m.add(5,9);
	 cout<<y;
	getch();
}