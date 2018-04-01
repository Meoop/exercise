#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string rsp;
    do {
        string str1, str2;
        cout << "Please enter two string:";
        cin >> str1 >> str2;
        cout << (str1.size() > str2.size() ? str1 : str2) << endl;
        cout << "More? enter yes or no:";
        cin >> rsp;
    } while (!rsp.empty() && rsp != "no");
    return 0;
}
