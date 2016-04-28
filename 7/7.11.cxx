//Exercise 7.11: Add constructors to your Sales_data class
//and write a program to use each of the constructors.

#include "SalesDataFunctions.h"
#include "SalesData.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
    SalesData book1;
    print(cout, book1);

    SalesData book2("04343FKSJQ3RAF");
    print(cout, book2);

    SalesData book3("IHOI32KJ4WNOC8", 12, 3.2);
    print(cout, book3);

    SalesData book4(cin); 
    print(cout, book3);
    
    return 0;
} 
