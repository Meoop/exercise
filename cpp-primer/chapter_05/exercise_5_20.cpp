#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, prestr;
    int t = 0;
    while (cin >> str){
        if (str == prestr){
            cout << str << endl;
            t = 1;
            break;
        }
        prestr = str;
    }
    if (t == 0) cout << "没有单词" << endl;
    return 0;
}
