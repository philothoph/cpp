//Exercise 7.1: Write a version of the transaction-processing 
//program from § 1.6 (p. 24)
//using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).
//Exercise 7.7: Rewrite the transaction-processing program
//you wrote for the exercises
//in § 7.1.2 (p. 260) to use these new functions (add, print, read).
//Exercise 7.13: Rewrite the program from page 255 to use the istream constructor.

#include "SalesDataFunctions.h"
#include "SalesData.h"
#include <iostream>

using std::cin; using std::cerr;
using std::cout; using std::endl;

int main()
{
    if (cin)
    {
        SalesData total(cin);
        SalesData trans(cin);
        do
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else if (!trans.isbn().empty())
            {
                print(cout, total) << endl;
                total = trans;                
            }
        }while (read(cin, trans));
        print(cout, total) << endl;;
    }
    else
        cerr << "NO DATA!" << endl;
        return -1;
    return 0;
}

