/******************************************************************************
Dynamic Allocation
new operator 

******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   int *p = new int; //dynamic allocate memory for an integer
   *p = 42; //assign the value of 42 to the dynamic int 
   cout << "Value of dynamic allocated int " << *p << endl;
   
    delete p; //free the allocated dynamic var to avoid memory leaks
    return 0;
}
