#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> ivec;
    int icin;
    while (cin >> icin)
        ivec.push_back(icin);

    for (auto i = ivec.begin(); i != ivec.end() - 1; ++i)
        cout << (*i + *(i + 1)) << " ";
    cout << endl;

    for (auto i = ivec.begin(); i < (ivec.begin() + ivec.size() / 2); ++i)
        cout << (*i + *(ivec.end() - 1 - i + ivec.begin())) << " ";
    cout << endl;

    return 0;
}
