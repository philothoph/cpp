#include <vector>
#include <iterator>

using std::vector;
using std::begin;
using std::end;

int main ()
{
    int arr[] = {0, 2, 4, 6, 8};
    vector<int> ivec(begin(arr), end(arr));

    return 0;
}
