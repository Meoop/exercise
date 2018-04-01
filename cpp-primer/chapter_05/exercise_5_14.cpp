#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string maxString, preString, str;
    int maxTime, time;
    time = maxTime = 1;
    while (cin >> str){
        if (str == preString){
            ++time;
            if (time > maxTime){
                maxTime = time;
                maxString = str;
            }
        }else {
            time = 1;
        }
        preString = str;
    }

    cout << maxString << " " << maxTime << endl;
    return 0;
}
