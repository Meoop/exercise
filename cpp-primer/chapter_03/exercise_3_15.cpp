#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> scin;
    string sv;
    while (cin >> sv)
        scin.push_back(sv);
    return 0;
}
