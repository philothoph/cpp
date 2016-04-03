#include <iostream>

unsigned fact (unsigned val)
{
    if (val > 1)
    {
        return fact(val - 1) * val;
    }
}

int main ()
{
    unsigned iu = 5;

    std::cout << fact(iu) << std::endl;

    return 0;
}
