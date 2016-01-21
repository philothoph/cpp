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

        letter = (score <=100) ? (score < 60)? lettergradeArr[0] : lettergradeArr[score / 10 - 5] : "Enter score in range 0-100" ;
        letter += (score == 100 || score < 60) ? "" : (score % 10 < 3) ? "-" : (score % 10 > 7) ? "+" : "";
        cout << letter << endl;

    }

    return 0;
}
