// A program with virtual destructor
#include <iostream>

using namespace std;

class base {
public:
	base()	
	{ cout << "Constructing base\n"; }
	virtual ~base()
	{ cout << "Destructing base\n"; }	
};

class derived : public base {
public:
	derived()	
	{ cout << "Constructing derived\n"; }
	virtual ~derived()
	{ cout << "Destructing derived\n"; }
};

int main()
{
    derived *d = new derived(); //object create
    base *b = d;
    delete b;

    return 0;
}
