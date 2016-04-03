//  Exercise 6.23: Write your own versions
// of each of the print functions presented in
// this section. Call each of these functions
// to print i and j defined as follows:
// int i = 0, j[2] = {0, 1};

#include <iostream>
#include <iterator>

using std::cout; using std::endl;
using std::begin; using std::end;

// Using a Marker to Specify the Extent of an Array
void print(const char arr[])
{
    if (arr)
        cout << arr << endl;;
}

// Explicitly Passing a Size Parameter
void print(const int *arr, size_t sz)
{
    for (decltype(sz) i = 0; i != sz; ++i)
        cout << arr[i];
    cout << endl;
}

// Using the Standard Library Conventions
void print(const int *beg, const int *en)
{
    for (; beg != en; ++beg)
        cout << *beg;
    cout << endl;
}

// Array Reference
void print(const int (&arr)[2])
{
    for (auto c : arr)
        cout << c;
    cout << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    char arr[] = "kate";

    print(arr);
    print(j, sizeof(j) / sizeof(*j));
    print(begin(j), end(j));
    print(j);

    return 0;
}
