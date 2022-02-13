// C++ program to implement
// Hierarchical Inheritance
#include<iostream>
using namespace std;

// base class define
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n"; //base class
	}
};


// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle
{
	
};
class Bus2: public Car, public Bus
{
	
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
    Bus2 d; //create object
	// Car obj1;
	// Bus obj2;
	return 0;
}
