/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Theory
{
public:
  Theory()
  {
    cout<<"This is your Theory marks "<<endl; 
  }
 

};
class Practical
{
    public:
    Practical()
    {
       cout<<"This is your Practical  marks "<<endl; 
    }
    
};
class Student : public Theory, public Practical
{
    public:
    Student() 
    {
      cout<<"Congratulations you have Passed in Theory and practical ";  
    }
    
};





int
main ()
{
 Student S1;

  return 0;
}

