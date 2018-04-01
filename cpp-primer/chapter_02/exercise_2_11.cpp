#include <iostream>

extern double pi = 3.1415;  //定义

int main()
{
    extern int i;               //声明i而非定义i
    int j;                      //声明并定义了j
    //函数体内部试图初始化一个由extern标记的变量
    //错误：‘pi’既有‘extern’又有初始值设定
    //extern double pi = 3.1415;  //定义

    //错误：‘ix’既有‘extern’又有初始值设定
    //extern int ix = 1024;       //定义
    int iy;                     //定义
    extern int iz;              //声明
    return 0;
}
