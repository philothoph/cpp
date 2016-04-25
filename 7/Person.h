#ifndef PERSONH
#define PERSONH

#include <string>
#include <iostream>

//class to hold name and address of person
struct Person
{
    std::string nm;	     //string for name
    std::string adrs;    //string for address

    //member function to return name of a person
    const std::string& name() const { return nm; }
    //member function to return address of a person
    const std::string& address() const { return adrs; }
};

std::ostream& print(std::ostream& os, const Person& item)
{
    os << item.name() << " " << item.address(); 
    return os;
}

std::istream& read(std::istream& is, Person& item)
{
    getline(getline(is, item.nm), item.adrs);
    return is;
}

#endif
