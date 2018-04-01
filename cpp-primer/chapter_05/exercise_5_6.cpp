#include <iostream>
#include <string>
#include <vector>

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
        (grade < 60) ? (cout << scores[0] << endl) : (cout << scores[(grade - 50) / 10] << endl);
    }
    return 0;
}
