/******************************************************************************
compute the sum of two numbers using pointers
**value - 10
* memory address - hex

values sa pointer * - dereference  
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int num1 = 10, num2 = 20;
    int *p1 = &num1, *p2 = &num2;
    int sum = *p1 + *p2;
    cout << "Sum of " << *p1 << " and " << *p2  << " is " << sum << endl;
    return 0;
}
