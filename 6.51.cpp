//Exercise 6.51: Write all four versions of f.
//Each function should print a distinguishing message.
//Check your answers for the previous exercise.

#include <iostream>

using std::cout;
using std::endl;

void f()
{
    cout << "f()" << endl;
}
void f(int i)
{
    cout << "f(int)" << "f(" << i << ")" << endl;
}
void f(int i, int j)
{
    cout << "f(int, int)" << "f(" << i << ", " << j << ")" << endl;
}
void f(double i, double j = 3.14)
{
    cout << "f(double, double)" << "f(" << i << ", " << j << ")" << endl;
}

int main()
{
//  f(2.56), 42);  //ambiguous call
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}
