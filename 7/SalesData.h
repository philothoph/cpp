#ifndef SALESDATAH
#define SALESDATAH #include <iostream>
#include <string>
using std::string;

struct SalesData;
std::istream& read(std::istream&, SalesData&); //declaration for istream constructor

class SalesData
{
//friend declarations of non-class functions
friend std::ostream& print(std::ostream& os, const SalesData&);
friend std::istream& read(std::istream& is, SalesData&);

public:
    //constructors
    SalesData() = default;
    //SalesData() : itemsSold(0), revenue(0) {}	       //Exercise 7.14
    SalesData(const string& s) : ISBN(s) {}            //initilizing ISBN
    SalesData(const string& s, unsigned n, double p) : //n is number of sold copies 
              ISBN(s), itemsSold(n), revenue(p * n) {} //i is price of each one 
    SalesData(std::istream& is) { read(is, *this); }   //defining in class

    //member functions
    string isbn() const { return ISBN; }    //defining
    SalesData& combine(const SalesData&);   //declaring
    double avg() const  { return revenue / itemsSold; } //defining average price function
private:
	std::string ISBN;
	unsigned itemsSold = 0;
	double revenue = 0.0;
};

//defining member function to merge a SalesData object with another
//and return first one with changes
inline SalesData& SalesData::combine(const SalesData& rhs)
{
	itemsSold += rhs.itemsSold;
	revenue += rhs.revenue;
	return *this;
}

//declaring nonmember SalesData interface functions
SalesData add(const SalesData&, const SalesData&); //returns new SalesData object
std::ostream& print(std::ostream& os, const SalesData&);     //returns output stream
std::istream& read(std::istream& is, SalesData&);            //returns input stream

//defining constructor with standard output initilization

#endif

