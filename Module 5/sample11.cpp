/******************************************************************************
Typedef usng array 
*******************************************************************************/
#include <iostream>
using namespace std;
//IntPtr 
typedef int *IntPtr;
int main()
{
    IntPtr p;
    int a[10];
    int i;
    
    for (i = 0; i<10;i++)
        a[i] = i;
    p = a;
    
    cout << "Print array a " <<endl;
    for (i = 0; i<10;i++)
        cout << a[i] << " ";
    cout << endl;
    
    cout << "Print array using pointer " <<endl;
    for (i = 0; i<10;i++)
        cout << p[i] << " ";    
    
    for (i=0;i<10;i++)
        p[i] = p[i]+1;
    
    cout << endl;
    
    for (i = 0; i<10;i++)
        cout << a[i] << " ";
    return 0;
}
