/******************************************************************************
Typedef with two dim array 
*******************************************************************************/
#include <iostream>
using namespace std;
typedef int *IntArrayPtr;
int main()
{
    int d1, d2;
    cout << "Enter row and column ";
    cin >> d1 >> d2;
   
    IntArrayPtr *m = new IntArrayPtr[d1];
    int i,j;
    for (i=0; i<d1;i++)
        m[i] = new int[d2];
    //m. is now a d1 by d2 array 
   
    cout << "Enter " << d1 << " rows of " << d2 << " integer each: \n";
    for (i=0; i<d1;i++)
        for (j=0;j<d2;j++)
            cin >> m[i][j];
    
    cout << "Display values \n";
    for (i=0; i<d1;i++){
         for (j=0;j<d2;j++)
            cout << m[i][j] << " ";
        cout <<endl;
    }
       
    for (i=0; i<d1; i++)
        delete[] m[i];
    delete[] m;
    
    return 0;
}
