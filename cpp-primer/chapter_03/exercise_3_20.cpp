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

    for (int i = 0; i < ivec.size() - 1; i++)
        cout << (ivec[i] + ivec[i + 1]) << " ";
    cout << endl;

    for (int i = 0; i < ivec.size() / 2; i++)
        cout << (ivec[i] + ivec[ivec.size() - i - 1]) << " ";
    cout << endl;

    return 0;
}
