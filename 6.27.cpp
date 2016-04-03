// Exercise 6.27: Write a function that takes an initializer_list<int>
// and produces the sum of the elements in the list.

#include <initializer_list>
#include <iostream>

using std::initializer_list;

int sum(initializer_list<int> il)
{
    int sum = 0;
    for (auto c : il)
        sum += c;
    return sum;
}

int main()
{
    std::cout << sum({1, 2, 3, 4, 5, 6}) << std::endl;

    return 0;
}
