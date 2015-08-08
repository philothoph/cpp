#include <iostream>
#include <string>
#include "SalesData.h"

int main()
{
	SalesData book1, book2;

	//read first transaction to varibles and checking there is any
	if (std::cin >> book1.ISBN >> book1.itemsSold >> book1.revenue)
	{
		/*debug output*/
		//std::cout << book1.ISBN << " " << book1.itemSold << " " << book1.revenue << std::endl;

		double totalSum = book1.revenue * book1.itemsSold;

		// read the rest of transactions
		while (std::cin >> book2.ISBN >> book2.itemsSold >> book2.revenue)
		{
			if (book1.ISBN == book2.ISBN)
			{
				book1.itemsSold += book2.itemsSold;
				totalSum += book2.revenue * book2.itemsSold;
			}
			else
			{
				//output the sum and total count of transaction current book
				std::cout << 
					book1.ISBN << " " << 
					book1.itemsSold << " " << 
					totalSum << " " <<
					totalSum / book1.itemsSold << std::endl;

				book1.ISBN = book2.ISBN;
				book1.itemsSold = book2.itemsSold;
				totalSum = book2.revenue * book2.itemsSold;
			}
		}
		//output the last transaction
		std::cout <<
			book1.ISBN << " " <<
			book1.itemsSold << " " <<
			totalSum << " " <<
			totalSum / book1.itemsSold << std::endl;
	}
	else
	{
		std::cerr << "There is no data" << std::endl;
		return -1;
	}

	return 0;
}
