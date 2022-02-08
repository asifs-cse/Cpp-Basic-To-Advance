#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        base(){cout<<"Construting base"<<endl;}
        virtual ~base(){cout<<"Destrituting base\n";}
};

class derived: public base{
    public:
        derived(){cout<<"Constrting derived\n";}
        virtual ~derived(){"Destrituting derived\n";}
};

int main(){
    derived *d = new derived();
    base *b = d;
    delete b;

    return 0;
}