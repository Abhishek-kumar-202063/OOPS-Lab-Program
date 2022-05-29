
#include <iostream>

using namespace std;

class PowerDevice
{
    public:
	PowerDevice() 
	{
	    cout<<"This is a PowerDevice"<<endl;
	    
	}
};
class Printer : public PowerDevice
{
    public:
	Printer() 
	{
	    cout<<"This is a Printer using power device"<<endl;
	    
	}
};
class Scanner : public PowerDevice  
{
    public:
	Scanner() 
	{
	    cout<<"This is a Scanner run through power device"<<endl;
	    
	}
};
class Copies : public Printer,Scanner
{
    public:
	Copies() 
	{
	    cout<<"This is  copy class which can used scanner and printer  "<<endl;
	    
	}
};

int main()
{
    Copies C1;

    return 0;
}
