#include <iostream>
/*
 * 简单主函数
 * 读取两个数，求他们的和
 */
int main()
{
    //提示用户输入两个数
    std::cout << "Enter two numbers:" << std::endl;
    int v1=0,v2=0;  //保存我们输入变量的值
    std::cin >> v1 >> v2; //读取输入数据
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
