// Exercise 7.32: Define your own versions of Screen and Window_mgr
// in which clear is a member of Window_mgr and a friend of Screen.

#ifndef E732H
#define E732H

#include <string>
#include <iostream>
#include <vector>

class Screen;

class Window_mgr
{
public:
    //variable for index of each screen
    using ScreenIndex = std::vector<Screen>::size_type;

    //constructors
    Window_mgr(); 
    //constructor initializes n displays with blank 80x24 screens
    Window_mgr(ScreenIndex);

    //declaration of overloaded clear function, friend of Screen class
    void clear(); //removes all Screens and initializes new blank 
    void clear(ScreenIndex); //removes given Screen

private:
    std::vector<Screen> screens;

};
class Screen
{
public:
    using pos = std::string::size_type;

    //friend declaration of clear from Window_mgr class
    friend void Window_mgr::clear(ScreenIndex);
    
    //constructors
    Screen() = default;
    //constructor to initialize Screen of given width and height,
    //filled with blanks
    Screen(pos w, pos h) : width(w), height(h), contents(w * h, ' ') {}
    //constructor to init Screen of given wdth and hght,
    //filled with given character
    Screen(pos w, pos h, char c) : width(w), height(h), contents(w * h, c) {}

    //member function declarations
    Screen& move(pos r, pos c);   //move cursor to a given location
    char get(pos r, pos c) const; //get the character from a given location
    Screen& set(char c);          //set the given character at the cursor

    //member function definition
    //overloaded member function get() gets the character at the cursor
    char get() const { return contents[cursor]; }
     //display the content of the Screen object
    Screen& display(std::ostream& os) { do_display(os); return *this; }
    //overloaded member for const Screen objects
    const Screen& display(std::ostream& os) const 
    { do_display(os); return *this; }

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

//constructors of Window_mgr class

Window_mgr::Window_mgr()
{
    std::vector<Screen> screens{ Screen(80, 24) };
}

Window_mgr::Window_mgr(ScreenIndex n)
{
    std::vector<Screen> screens(n, Screen(80, 24));
}

//definition of member of Window_mgr class
inline void Window_mgr::clear()
{
    screens = { Screen(80, 24, ' ') };
}

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen& screen = screens[i];
    screen.contents = std::string(" ", screen.width * screen.height);
}

//definitions of member functions of Screen class
inline Screen& Screen::move(pos r, pos c)
{
    if (r > 0 && c > 0)
        cursor = (r - 1) * width + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const
{
    return contents[(r - 1) * width + c];
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

#endif

