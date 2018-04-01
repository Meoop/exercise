#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec;
    string str;
    while (cin >> str)
        svec.push_back(str);

    for (auto& s : svec)
        for (auto& c : s)
            c = toupper(c);

    for (auto s : svec)
        cout << s << endl;

    return 0;
}
