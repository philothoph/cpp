#ifndef SALESDATAH
#define SALESDATAH
#include <string>
struct SalesData
{
    //member functions
    std::string isbn() const {return ISBN;}
    SalesData& combine(const SalesData&);

	std::string ISBN;
	unsigned itemsSold = 0;
	double revenue = 0.0;
};

SalesData& SalesData::combine(const SalesData& rhs)
{
	itemsSold += rhs.itemsSold;
	revenue += rhs.revenue;
	return *this;
}

#endif
