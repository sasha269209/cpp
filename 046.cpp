//file 046.cpp   ( several files...)
//lessons 34 {@pathtocpp cpp}

#include <iostream>
#include <string>
#include "046_sum.h"
#include "046_change.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;



int main()
{
int a = 44, b = 77;
//a = change(a);
cout << "sum a+b = " << sum (a,b) << "\n";

return 0;
}