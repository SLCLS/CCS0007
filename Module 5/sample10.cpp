/******************************************************************************
Typedef 
*******************************************************************************/
#include <iostream>
using namespace std;
//IntPtr 
typedef int *IntPtr;
int main()
{
    IntPtr p1, p2;
    p1 = new int;
    *p1 = 100;
    p2 = p1;
    cout << "value of p2 " << *p2 << endl; 

    return 0;
}
