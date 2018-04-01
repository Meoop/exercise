#include <iostream>
int main()
{
    int i = 0, &r = i;
    auto a = r;                 //a是一个整数

    const int ci = i, &cr = ci; 
    auto b = ci;                //b是一个整数
    auto c = cr;                //c是一个整数
    auto d = &i;                //d是一个整形指针
    auto e = &ci;               //e是一个指向整数常量的指针
    const auto f = ci;          //f是const int
    auto &g = ci;               //g是一个整形常量引用，绑定到ci
    const auto &j = 42;         //可以为常量引用绑定字面值
    auto k = ci,&l = i;         //同一种类型
    auto &m = ci, *p = &ci;

    std::cout << a << "----";
    a = 42;
    std::cout << a << std::endl;
    std::cout << b << "----";
    b = 42;
    std::cout << b << std::endl;
    std::cout << c << "----";
    c = 42;
    std::cout << c << std::endl;
    std::cout << d << "----";
    //d = 42;                         //从类型‘int’到类型‘int*’的转换无效
    std::cout << d << std::endl;
    std::cout << e << "----";
    //e = 42;                         //从类型‘int’到类型‘const int*’的转换无效
    std::cout << e << std::endl;
    std::cout << g << "----";
    //g = 42;                         //向只读参数赋值
    std::cout << g << std::endl;

    return 0;
}
