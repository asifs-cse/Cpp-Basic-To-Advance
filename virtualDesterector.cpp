#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        base(){cout<<"Construting base"<<endl;}
        virtual ~base(){cout<<"Destrituting base\n";}
};

class derived: public base{
    public:
        derived(){cout<<"Constrting derived";}
        virtual ~derived(){"Destrituting derived";}
};

int main(){
    cout<<"Virtual destrector"<<endl;
    return 0;
}