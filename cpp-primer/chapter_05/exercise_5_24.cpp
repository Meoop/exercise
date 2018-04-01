#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int i, j;
    std::cin >> i >> j;
    if (j == 0)
        throw std::runtime_error("divisor is 0");
    std::cout << i / j << std::endl;

    return 0;
}
