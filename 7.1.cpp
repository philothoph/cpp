//Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24)
//using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).
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
                total.itemsSold += trans.itemsSold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << "ISBN: " << total.ISBN << " Items: " << total.itemsSold
                     << " Revenue: " << total.revenue << endl;
                total.ISBN = trans.ISBN;
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
