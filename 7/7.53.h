#ifndef DEBUGH
#define DEBUGH

class Debug
{
public:
    constexpr Debug(bool b = true) : io(b), other(b) {}
    constexpr Debug(bool i, bool o) : io(i), other(o) {}

    constexpr bool any() { return io || other; }

    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool io;
    bool other;
};

#endif
