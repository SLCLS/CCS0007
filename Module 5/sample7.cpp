/******************************************************************************
Dynamic Allocation
new operator 
use array 
******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int size  = 5;
    int *arr =new int [size];
   
    for (int i = 0; i<size;i++){
        arr[i] = i*2;   
    }
  
    for (int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
