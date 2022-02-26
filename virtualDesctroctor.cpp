#include<iostream.h>
#include<conio.h>
class B
{
public:
B()
{
cout<<“In constructor of
class B”;
}
virtual ~B()
{
cout<<“In destructor of
class B”;
}
};
class D: public B
{
public:
D()
{
cout<<“In constructor of
class D”;
}
~ D()
{
cout<<“In destructor of
class D”;
}
};
void main()
{
clrscr();
B *p;
p= new D;
delete p;
}
