#include <iostream>
#include <vector>

using std::vector;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = arr[i];
    int narr[10];
    for (int i = 0; i < 10; i++)
        narr[i] = arr[i];

    vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(i);
    vector<int> nvec(vec);

    return 0;
}
