#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int v1 = 0, v2 = 0;
    cout << "Please input two number:" << endl;
    cin >> v1 >> v2 ;
    cout << "the numbers between " << v1 << " and " << v2 << " are:" << endl;
    while (v2>v1) {
        cout << ++v1 << endl;
    }
    return 0;
}
