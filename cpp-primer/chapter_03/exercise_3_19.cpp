#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> ivec_1(10, 42);     //最优

    vector<int> ivec_2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };

    vector<int> ivec_3;
    for (int i = 0; i < 10; i++)
        ivec_3.push_back(42);

    return 0;
}
