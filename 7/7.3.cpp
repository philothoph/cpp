//Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24)
//using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).
//Exercise 7.2: Add the combine and isbn members to the Sales_data class you
//wrote for the exercises in § 2.6.2 (p. 76).
//Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use
//these members.
#include "SalesData.h"
#include <iostream>

using std::cin; using std::cerr;
using std::cout; using std::endl;

int main()
{
    SalesData total;
    if (getline(cin, total.ISBN) >> total.itemsSold >> total.revenue)
    {
        SalesData trans;
        while (cin >> trans.ISBN >> trans.itemsSold >> trans.revenue)
        {
            if (total.ISBN == trans.ISBN)
            {
				total.combine(trans);
            }
            else
            {
                cout << "ISBN: " << total.isbn() << " Items: " << total.itemsSold
                     << " Revenue: " << total.revenue << endl;
                total.ISBN = trans.isbn();
                total.itemsSold = trans.itemsSold;
                total.revenue = trans.revenue;
            }

        }
        cout << "ISBN: " << total.ISBN << " Items: " << total.itemsSold
                 << " Revenue: " << total.revenue << endl;
    }
    else
        cerr << "NO DATA!" << endl;

    return 0;
}
