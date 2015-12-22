#include <vector>
#include <iterator>
#include <iostream>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main ()
{
    vector<int> intVector{0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    size_t sz = intVector.size();
    int intArray[sz];

    for (size_t i = 0; i != sz; ++i)
        intArray[i] = intVector[i];

    for (auto c : intArray)
        cout << c << " ";
    cout << endl;

    return 0;
}
