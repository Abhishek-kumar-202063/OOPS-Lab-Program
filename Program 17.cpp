#include<iostream>
using namespace std;

class Function                       
{
    int x, y;                   
    public:                         

    void getvalue()                  //function defination
    {
        cout<<"Enter the value of Numbers x: ";
        cin >> x;
        cout<<"Enter the value of Numbers y: ";
        cin>>y;
        
    }

    Function operator+(Function F)     //binary operator overloading 
    {
        Function res;
        res.x =  x+ F.x;
        res.y = y + F.y;
        return (res);
    }

    Function operator-(Function F)      //binary operator overloading
    {
        Function res;
        res.x = x - F.x;
        res.y = y - F.y;
        return (res);
    }

    void display()                      // display function
    {
        cout<<"The sum of x is: "<<x<<" and y is: "<<y<<endl;
    }
    void display1()                     //display function 
    {
        cout<<"The difference of x is: "<<x<<" and y is: "<<y<<endl;
    }
};
int main() 
{
    Function f1, f2, result, result1;    

    f1.getvalue();                      
    f2.getvalue();

    result = f1 + f2;                    //adding two objects using + operator
    result1 = f1 - f2;                   //subtracting two objects 

    cout << "Result: "<<endl;
    result.display();                   
    result1.display1();
    return 0;
}