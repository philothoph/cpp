#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin; using std::string;

int main()
{
    //define array for letter grades
    string lettergradeArr[] = {"F", "D", "C", "B", "A", "A++"};

    for (unsigned score = 0; cin >> score;)         //input score
    {
        string letter;

        if (score <= 100)                           //checking range
        {
            if (score < 60)
                letter = lettergradeArr[0];
            else
            {
                letter = lettergradeArr[score / 10 - 5];
                if (score != 100)
                    if (score % 10 < 3)
                        letter += '-';
                    else if (score % 10 > 7)
                        letter += '+';
            }
        }
        else
            cout << "Enter score in range 0-100" << endl;
        cout << letter << endl;
    }
    //debug output


    return 0;
}
