#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1("hello"), s2("world");
    if (s1 == s2)
        cout << "same string." << endl;
    else if (s1 > s2)
        cout << "s1 > s2" << endl;
    else
        cout << "s1 < s2" << endl;

    const char* cs1 = "hello";
    const char* cs2 = "world";
    auto result = strcmp(cs1, cs2);
    if (result == 0)
        cout << "same string." << endl;
    else if (result < 0)
        cout << "cs1 < cs2" << endl;
    else
        cout << "cs1 > cs2" << endl;

    return 0;
}
