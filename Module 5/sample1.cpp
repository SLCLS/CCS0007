/*****************************************************************************
 pointers
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int v = 5;
    int *p = &v;
    cout << "Value of v: " << v << endl;
    cout << "Address of v: " << p << endl;
    cout << "Value at address stored in p: "<< *p <<endl;
    *p = 10;
    cout << "New value of v: " << v << endl;
    
    //float 
    float pi = 3.14;
    float *p2 = &pi;
    cout << "Value of pi: " << *p2 << endl; //dereference
    
    //char 
    char ch = 'A';
    char *p3 = &ch;
    cout << "Value of ch: " << *p3 << endl;
    
    
    
    
    return 0;
}
