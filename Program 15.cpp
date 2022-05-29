#include <iostream>
using namespace std;
class first {
   public:
   first(){
      cout << "This is the first class\n";
   }
};
//container class
class second {
   first f;          // other class object handle by other class  
   public:
   //constructor
   second(){
      cout << "This is the second class\n";
   }
};
int main(){
   second s;
   return 0;
}
