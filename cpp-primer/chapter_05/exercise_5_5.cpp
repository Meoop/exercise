#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
    const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    int grade;
    while (cin >> grade) {
        if (grade < 60)
            cout << scores[0] << endl;
        else
            cout << scores[(grade - 50) / 10] << endl;
    }
    return 0;
}
