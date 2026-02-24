/******************************************************************************
increment the values of array using pointers
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int arr[5] ={10,20,30,40,50};
    int *p = arr; //point to the first element of the array 

    cout << "Array elements " << endl;
    //cout << *p;
    for (int i = 0; i<5;i++){
        cout << *(p+i) << " ";
    }
    cout << endl;
    return 0;
}
