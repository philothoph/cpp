//Exercise 6.54: Write a declaration for a function that takes two int parameters and
//returns an int, and declare a vector whose elements have this function pointer type.
//Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int
//values. Store pointers to these functions in your vector from the previous exercise.
//Exercise 6.56: Call each element in the vector and print their result.
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

//add two integers
inline int add(const int i, const int j)
{
    return i + j;
}

//subtract second integer from first
inline int subtract(const int i, const int j)
{
    return i - j;
}

//multiply two integers
inline int multiply(const int i, const int j)
{
    return i * j;
}

//divide first integer by second
inline int divide(const int i, const int j)
{
    return i / j;
}

//define function type
using FP = int(*)(int, int); //FP is a function pointer type

FP addP = &add;      //pointer to add function
FP subP = &subtract; //pointer to subtract function
FP mulP = &multiply; //pointer to multiply function
FP divP = &divide;   //pointer to divide function

//store function pointers in vector
vector<FP> vecFP{addP, subP, mulP, divP}; //vector of pointers to function

int main()
{
    //Call each function in vector vecFP and print result
    for (auto c : vecFP)
        cout << c(6, 2) << endl;

    return 0;
}
