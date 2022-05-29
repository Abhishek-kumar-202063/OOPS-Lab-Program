#include <iostream>

using namespace std;
class Theory                    // base  class   
{
public:
  Theory()
  {
    cout<<"This is your Theory marks "<<endl; 
  }
 };
class Practical                 // Base class 
{
    public:
    Practical()
    {
       cout<<"This is your Practical  marks "<<endl; 
    }
    
};
class Student : public Theory, public Practical    // Class student inherits two class 
{
    public:
    Student() 
    {
      cout<<"Congratulations you have Passed in Theory and practical ";  
    }
};
int main ()
{
 Student S1;    // obj of class Student 
  return 0;
}

