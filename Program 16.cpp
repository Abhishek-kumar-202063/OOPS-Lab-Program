#include <iostream>
using namespace std;

class square
{  private:
    int side;                       
    int area;                       
   public:
   square(int a)                    //constructor
   {
       side=a;
   }
    void operator--()               //operator overloading
   {
     side=side-1;
   }
   int calc()                       // function square calculating
   {
      area=side*side;
       return area;
   } 
   void display()                   //display function
   {
       cout<<"The square is: "<<area ;
   }
};

int main()
{
    int a;
    cout<<"Enter the side of the square: ";
    cin>>a;
    cout<<"After decrementing --"<<endl;
    square A1=square(a);          
    --A1;                         //operator call
    A1.calc();                    //function call
    A1.display();                
    return 0;
}