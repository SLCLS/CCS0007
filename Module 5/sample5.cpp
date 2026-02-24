/******************************************************************************
NULL pointer -> does not point to any valid memory address
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int *p = NULL; //init pointer to NULL 
    // int value = 42;
    // int *p = &value;
    
    if (p==NULL) {
        cout << "Pointer p is not point to any memory location";
    }else{
        cout << "Pointer p is a valid memory location with value of " <<*p<<endl;

    }
    
    return 0;
}
