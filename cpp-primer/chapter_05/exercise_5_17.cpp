#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi1 = {0, 1, 1, 2};
    vector<int> vi2 = {0, 1, 1, 2, 3, 5, 8};
    auto i1 = vi1.begin(), i2 = vi2.begin();
    for (; i1 != vi1.end() && i2 != vi2.end(); ++i1, ++i2)
        if (*i1 != *i2) break;
    if(i1 == vi1.end() || i2 == vi2.end()) 
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
