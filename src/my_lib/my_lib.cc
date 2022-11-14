#include <iostream>
using namespace std;
#include "my_lib.h"

void add(int a, int b)
{
    cout << "this console out is from library source" << endl;
    cout << "Sum of " << a << " & " << b << " : " << a + b << endl;
}
