#ifndef PERSONH
#define PERSONH

#include <string>

//class to hold name and address of person
struct Person
{
	std::string nm;		//string for name
	std::string adrs;    //string for address

	//member function to return name of a person
	std::string& name() const { return nm; }
	//member function to return address of a person
	std::string address() const { return adrs; }
};

#endif
