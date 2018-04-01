#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    cout << "v1  "
         << "size:" << v1.size() << endl;
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v2  "
         << "size:" << v2.size() << endl;
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v3  "
         << "size:" << v3.size() << endl;
    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v4  "
         << "size:" << v4.size() << endl;
    for (auto it = v4.begin(); it != v4.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v5  "
         << "size:" << v5.size() << endl;
    for (auto it = v5.begin(); it != v5.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v6  "
         << "size:" << v6.size() << endl;
    for (auto it = v6.begin(); it != v6.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v7  "
         << "size:" << v7.size() << endl;
    for (auto it = v7.begin(); it != v7.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
