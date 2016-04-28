//Exercise 7.6: Define your own versions of the add, read, and print functions.

#ifndef SALESDATAFUNCTIONSH
#define SALESDATAFUNCTIONSH

#include <iostream>
#include "SalesData.h"

//Combine two SalesData objects and return a new one
SalesData add(const SalesData& lhs, const SalesData& rhs)
{
    SalesData sum = lhs;
    sum.combine(rhs);
    return sum;
}

//Prints content of SalesData object,
//returns an output stream
std::ostream& print(std::ostream& os, const SalesData& item)
{
    os << item.ISBN << " " << item.itemsSold << " "
       << item.revenue << " " << item.avg();
    return os;
}

//Reads from standard input to SalesData object
//return input stream
std::istream& read(std::istream& is, SalesData& item)
{
    is >> item.ISBN >> item.itemsSold >> item.revenue;
    return is;
}

#endif

