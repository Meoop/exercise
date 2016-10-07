#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> vec(begin(arr), end(arr));
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}
