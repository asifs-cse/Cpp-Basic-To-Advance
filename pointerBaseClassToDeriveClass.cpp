#include<iostream>
using namespace std;

class A
{
public :
int b;
void display()
{
cout<<"b = " <<b <<"\n";
}
};
class B : public A
{
public :
int d;
void display()
{
cout<<"b= " <<b <<"\n" <<" d="<<d <<"\n";
}
};
main()
{
A *cp;
A base;
cp=&base;
cp->b=100;
// cp->d=200; Not Accessible
cout<<"\n cp points to the base object \n";
cp->display();
B b;
cout<<"\n cp points to the derived class" ;
cp=&b;
cp->b=150;
// cp->d=300; Not accessible
cp->display();
return 0;
}