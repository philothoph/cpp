#ifndef PERSONH
#define PERSONH

#include <string>
#include <iostream>

//declaration for istream constructor
class Person;
std::istream& read(std::istream&, Person&);

//class to hold name and address of person
class Person
{
friend std::ostream& print(std::ostream&, const Person&);
friend std::istream& read(std::istream&, Person&);
public:
    //constructors
    Person() = default;
    Person(const std::string& n) : nm(n) {}                         //init with name
    Person(const std::string& n, const std::string& a) : nm(n), adrs(a) {}//with name and address
    explicit Person(std::istream& is) { read(is, *this); }

    //member function to return name of a person
    const std::string& name() const { return nm; }
    //member function to return address of a person
    const std::string& address() const { return adrs; }
private:
    std::string nm;	 //string for name
    std::string adrs;    //string for address

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
