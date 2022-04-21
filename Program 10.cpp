//program for different types of constructors 
#include<iostream>
using namespace std;

class function                                             //creating class with name "Function"
{
    private:
    int x;
    int y;
    
    public:
   function()                                                  //deafult constructor
   { 
       cout<<"This is a deafult constructor."<<endl;
   }
   function(int a, int b)                                      //parametrised constructor
   {                                                          
       x=a; 
       y=b;
       cout<<"This is parametrised construction, value of x:"<<x<<" and y: "<<y<<endl;
   }
   function(function &c)                                       //copy constructor
   {
       x=c.x;
       y=c.y;
       cout<<"This is copy constructor ,value of x: "<<x<<" and value of y: "<<y<<endl;
    }
};

int main()
{
    function C1,C4(5,5),C5;                                   //creating object of function data type 
    function C2(4,6);
    function C3(C2);                                           //using copy constructor 
    return 0; 
}