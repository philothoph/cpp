//Exercise 7.1: Write a version of the transaction-processing 
//program from § 1.6 (p. 24)
//using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).
//Exercise 7.7: Rewrite the transaction-processing program
//you wrote for the exercises
//in § 7.1.2 (p. 260) to use these new functions (add, print, read).

#include "7.6.h"
#include "SalesData.h"
#include <iostream>

using std::cin; using std::cerr;
using std::cout; using std::endl;

int main()
{
    SalesData total;
    if (read(cin, total))
    {
        SalesData trans;
        while (read(cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total);
                trans = total;                
            }
        }
        print(cout, total);
    }
    else
        cerr << "NO DATA!" << endl;
        return -1;
    return 0;
}

