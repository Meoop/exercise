#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (auto& i : v) //对v的每个元素
        i *= i;       //求元素值的平方
    for (auto i : v)
        cout << i << " "; //输出
    cout << endl;

    return 0;
}
