#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i = 0;
    while (cin >> i) {
        cout << ((i > 90) ? "high pass" : (i > 75) ? "pass" : (i > 60) ? "low pass" : "fail") << endl;

        if (i > 90)
            cout << "high pass" << endl;
        else if (i > 75)
            cout << "pass" << endl;
        else if (i > 60)
            cout << "low pass" << endl;
        else
            cout << "fail" << endl;
    }
    return 0;
}
