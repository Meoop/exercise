#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x = 0, y = 10;
    cout << "true: ";
    cout << (1 > 0 ? ++x, ++y : --x, --y) << endl;
    x = 0;
    y = 10;
    cout << "false:";
    cout << (1 > 10 ? ++x, ++y : --x, --y) << endl;
    return 0;
}
