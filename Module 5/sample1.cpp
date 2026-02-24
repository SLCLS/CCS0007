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
    return 0;
}
