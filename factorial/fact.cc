#include "Chapter6.h"

unsigned fact(unsigned val)
{
    if (val > 1)
        return fact(val - 1) * val;
    else
        return 1;
}
