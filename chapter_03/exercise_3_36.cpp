#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr1[3] = { 0, 1, 2 };
    int arr2[2] = { 0, 1 };
    int *a1, *a2;
    for (a1 = begin(arr1), a2 = begin(arr2);
         a1 != end(arr1) && a2 != end(arr2); ++a1, ++a2) {
        if (*a1 != *a2) {
            cout << "The two arrays are not equal." << endl;
            break;
        }
    }
    if (a1 != end(arr1) || a2 != end(arr2))
        cout << "The two arrays are not equal." << endl;
    else
        cout << "The two arrays are equal." << endl;

    vector<int> vec1 = { 0, 1, 2 };
    vector<int> vec2 = { 0, 1, 2 };
    if (vec1 == vec2)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    return 0;
}
