// Exercise 6.22: Write a function to swap two int pointers.

#include <iostream>

void swap_pointers(int *&p1, int *&p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int i = 2, j = 45;
    int *ip = &i, *jp = &j;

    swap_pointers(ip, jp);

    std::cout << "i = " << i
              << "\nj = " << j
              << "\n*ip = " << *ip
              << "\n*jp = " << *jp
              << std::endl;
}
