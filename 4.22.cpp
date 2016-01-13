#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    for (unsigned grade; cin >> grade;)
    {
        //conditional operator
        auto finalgrade = (grade > 90) ? "high pass"
                    : (grade < 60) ? "fail"
                    : (grade > 75) ? "pass" : "low pass";
        cout << finalgrade << endl;

        //if statements
        if (grade < 60) finalgrade = "fail";
        else if (grade > 90) finalgrade = "high pass";
        else if (grade > 75) finalgrade = "pass";
        else finalgrade = "low pass";
        cout << finalgrade << endl;
    }

    return 0;
}
