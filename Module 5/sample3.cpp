/******************************************************************************
decrement a pointer to access the elements in reverse order
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int arr[5] ={10,20,30,40,50};
    int *p = &arr[4]; // p points to the last element of the array 

    cout << "Array elements in reverse order " << endl;
    for (int i = 0; i<5;i++){
        cout << *(p-i) << " ";
    }
    cout << endl;
    return 0;
}
