#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10, 2);
    for (auto iv = ivec.begin(); iv != ivec.end(); ++iv)
        *iv *= *iv;
    for (auto iv = ivec.begin(); iv != ivec.end(); ++iv)
        cout << *iv << " ";
    cout << endl;
    return 0;
}
