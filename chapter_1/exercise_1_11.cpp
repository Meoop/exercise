#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Please input two number:" << std::endl;
    std::cin >> v1 >> v2 ;
    std::cout << "the numbers between " << v1 << " and " << v2 << " are:" << std::endl;
    while (v2>v1) {
        std::cout << ++v1 <<std::endl;
    }
    return 0;
}
