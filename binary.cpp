#include<iostream>
#include<conio.h>

using namespace std;
class binary
{
    public:
    string  a;

int set(string x)
{
    a=x;

    return 0;
}
int operator+(binary cob2)
{
    string c=a+cob2.a;

    cout<<c<<endl;
    return 0;
}
int dis()
{

    return 0;
}
};
int main()
{
    binary ob1,ob2;
    ob1.set("amal");
    ob2.set("sukhadewe");

    ob1+ob2;
    getch();
    return 0;

}
