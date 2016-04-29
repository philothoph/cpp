// Exercise 7.23: Write your own version of the Screen class.
// Exercise 7.24: Give your Screen class three constructors:
// a default constructor; a constructor that takes values for height and width
// and initializes the contents to hold the given number of blanks;
// and a constructor that takes values for height, width, and a
// character to use as the contents of the screen.

#include <string>

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

private:
    // width and height of screen
    pos width = 0, height = 0;
    //position of cursor
    pos cursor = 0;
    //contents of screen is a string
    std::string contents;
};
