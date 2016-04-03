/*
* Write a function that takes an int and a pointer to an int and returns
* the larger of the int value or the value to which the pointer points.
* What type should you use for the pointer?
*/

#include <iostream>

int compare_int(const int i, const int *ip)
{
    return (i > *ip) ? i : *ip;
}

int main()
{
    int j = 6;
    int k = 88;
    int *pk = &k;

    std::cout << compare_int(j, pk) << std::endl;

    return 0;
}
