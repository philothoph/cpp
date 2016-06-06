#include <string>

using std::string;

class Vehicle
{
public:
    Vehicle(string md = "", unsigned short yr = 0, string tp = "",
            unsigned short hp = 0, double con = 0)
        : model(md), year(yr), type(tp), horsepower(hp), consumption(con) {}

private:
    string model;
    unsigned short year = 0;
    string type;
    unsigned short horsepower = 0;
    double consumption = 0;

};