#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::cin; using std::vector;

int main ()
{
    vector<int> v1{0, 1, 1, 2, 3, 5, 8, 13, 21};
    vector<int> v2{0, 1, 1, 2};

    auto beg1 = v1.begin();
    auto beg2 = v2.begin();

    for (;
          (beg1 != v1.end() || beg2 != v2.end()) && *beg1 == *beg2;
          ++beg1, ++beg2); //null statements are intentional
    if (beg1 == v1.end())
        cout << "First vector is prefix" << endl;
    else if (beg2 == v2.end())
        cout << "Second vector is prefix" << endl;
    else
        cout << "There is no prefix" << endl;

    return 0;
}
