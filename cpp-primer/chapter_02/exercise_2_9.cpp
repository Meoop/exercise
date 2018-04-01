#include <iostream>
int main()
{
    // 错误：expected primary-expression before ‘int’
    std::cin >> int input_value;
    //错误：在 {} 内将‘3.1400000000000001e+0’从‘double’转换为较窄的类型‘int’ [-Wnarrowing]
    int i = {3.14};
    //错误：‘wage’在此作用域中尚未声明
   /double salary = wage = 9999.99;
    //正确，i的值为3
    int i = 3.14;
    return 0;
}
