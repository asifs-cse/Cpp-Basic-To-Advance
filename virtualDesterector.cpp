#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        base(){cout<<"Construting base"<<endl;}
        virtual ~base(){cout<<"Destrituting base\n";}
};

int main(){
    cout<<"Virtual destrector"<<endl;
    return 0;
}