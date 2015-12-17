#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    size_t size0 = 10, size1 = 10;
    int array0[size0], array1[size1];
    vector<int> vector0(size0), vector1(size1);

    //Compare arrays
    for (size_t i = 0; i != size0; ++i)
    {
        if (array0[i] != array1[i])
        {
            cout << "Arrays are NOT equal" << endl;
            break;
        }
        if (i == size0 - 1)
        {
            cout << "Arrays are equal" << endl;
        }
    }
    //Compare vectors
    if (vector0 == vector1)
        cout << "Vectors are equal" << endl;
    else
        cout << "Vectors are NOT equal" << endl;

    return 0;
}
