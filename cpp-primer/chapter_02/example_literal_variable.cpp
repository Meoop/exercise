#include <iostream>
/*
 * 2.1.3 字面值常量
 */
int main()
{
    // multiline string literal
    std::cout << "a really, really long string literal "
                 "that spans two lines" << std::endl;

    std::cout << "Hi \x4dO\115!\n";   //输出Hi MOM！，转到新的一行
    std::cout << '\115' << '\n';      //输出M，转到新的一行

    bool test = false;

    return 0;
}
