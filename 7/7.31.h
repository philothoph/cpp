//Exercise 7.31: Define a pair of classes X and Y, in which 
//X has a pointer to Y, and Y has an object of type X.

#ifndef E731H
#define E731H

class Y;

class X
{
    Y* y;
};

class Y
{
    X x;
};
#endif

