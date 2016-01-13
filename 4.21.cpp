#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec(20, 0);
    for (vector<int>::size_type iter = 0; iter != vec.size(); ++iter)
        vec[iter] = iter;

    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
        cout << ((*iter % 2) ? *iter * 2 : *iter) << endl;
    return 0;
}
