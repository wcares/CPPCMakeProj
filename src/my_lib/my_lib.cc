#include <iostream>
using namespace std;
#include "my_lib.h"

// unsigned int Factorial( unsigned int number ) {
//     return number <= 1 ? number : Factorial(number-1)*number;
// }

void add(int a, int b)
{
    cout << "this console out is from library source" << endl;
    cout << "Sum of " << a << " & " << b << " : " << a + b << endl;
}
