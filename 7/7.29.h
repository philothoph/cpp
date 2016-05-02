// Exercise 7.23: Write your own version of the Screen class.
// Exercise 7.24: Give your Screen class three constructors:
// a default constructor; a constructor that takes values for height and width
// and initializes the contents to hold the given number of blanks;
// and a constructor that takes values for height, width, and a
// character to use as the contents of the screen.

#ifndef SCREENH
#define SCREENH

#include <string>
#include <iostream>

class Screen
{
public:
    using pos = std::string::size_type;
    
    //constructors
    Screen() = default;
    //constructor to initilize Screen of given width and heigth, filled with blanks
    Screen(pos w, pos h) : width(w), height(h), contents(w * h, ' ') {}
    //constructor to init Screen of given wdth and hgth, filled with given character
    Screen(pos w, pos h, char c) : width(w), height(h), contents(w * h, c) {}

    //member function declarations
    Screen move(pos r, pos c);   //move cursor to a given location
    char get(pos r, pos c) const; //get the character from a given location
    Screen set(char c);          //set the given character at the cursor

    //member function definition
    //overloaded member function get() gets the character at the cursor
    char get() const { return contents[cursor]; }
     //display the content of the Screen object
    Screen display(std::ostream& os) { do_display(os); return *this; }
    //overloaded member for const Screen objects
    const Screen display(std::ostream& os) const { do_display(os); return *this; }

private:
    // width and height of screen
    pos width = 0, height = 0;
    //position of cursor
    pos cursor = 0;
    //contents of screen is a string
    std::string contents;

    //extra function to actually display the content of Screen object
    void do_display(std::ostream& os) const { os << contents; }
};

//definitions of member functions
inline Screen Screen::move(pos r, pos c)
{
    if (r > 0 && c > 0)
        cursor = (r - 1) * width + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const
{
    return contents[(r - 1) * width + c];
}

inline Screen Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

#endif

