#include <iostream>  
  
using namespace std;  
  
class Class1  
{  
    int x =5;  
    friend class Class2;           // friend class.  
};  
class Class2 
{  
  public:  
    void display(Class1 c1)  
    {  
        cout<<"value of x is : "<<c1.x;  
    }  
};  
int main()  
{  
    Class1 c1;  
    Class2 c2;  
    c2.display(c1);  
    return 0;  
}  
