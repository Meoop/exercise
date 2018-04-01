#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 10;
    while (cout << i << " ", --i)
        ;
    return 0;
}
