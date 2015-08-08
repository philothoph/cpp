#ifndef SALESDATAH
#define SALESDATAH
#include <string>
struct SalesData
{
	std::string ISBN;
	unsigned itemsSold = 0;
	double revenue = 0.0;
};

#endif
