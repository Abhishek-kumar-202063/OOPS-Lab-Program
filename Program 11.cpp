#include <iostream>

using namespace std;

class Complex
{
    private:
    int a,b;
    
    public:
    
    Complex(int x,int y)                     //constructor 
    {
       a=x;
       b=y;
    }
     ~Complex()                           // destructor 
    {
      cout<<"This is the destructor "; 
    }
    void display()
    {
      cout<<"the value of a="<<a<<endl<<"the value of b="<<b<<endl;
    }
    
    
};

int main()
{
    Complex Obj(10,15);                  //Creating object 
    
    Obj.display();

    return 0;
}

