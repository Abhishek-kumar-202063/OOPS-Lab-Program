#include <iostream>

using namespace std;

class India
{
    public:
    void set_fun1()
    {
        cout<<"India is my country"<<endl;
    }
};

class Bihar:public India
{
    public:
    void set_fun2()    {
        cout<<"This is my state  Bihar"<<endl;
    }
};

class Champaran :public Bihar
{
    public:
    void set_fun3()
    {
        cout<<"Champaran is my Distric"<<endl;
    }
};


int main()
{
    Champaran s;
    s.set_fun1();
    s.set_fun2();
    s.set_fun3();
   
    return 0;
}
