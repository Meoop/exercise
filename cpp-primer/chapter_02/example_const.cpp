#include <iostream>
/**
 * 2.4 const 
 */
int main()
{
    const int bufSize = 512;        //输入缓冲区大小
    //const int j;                    //错误，未经初始化
    int i = 42;
    const int ci = i;               //正确，i的值拷贝给了ci
    int j = ci;                     //正确，ci的值拷贝给了j

    //2.4.1 reference to const
    const int cii = 1024;
    const int &r1 = cii;            //正确，引用及其对应的对象都是常量
    //r1 = 42;                        //错误，r1是对常量的引用
    //int &r2 = cii;                  //错误，试图用一个非常量引用指向一个常量对象
    
    int ii = 42;
    const int &r11 = i;             //允许将const int&绑定到一个普通int上
    const int &r22 = 42;            //正确，r22是一个常量引用
    const int &r33 = r1 * 2;        //正确，r33是一个常量引用
    
    int iii= 42;
    int &r111 = iii;                
    const int &r222 = i;            //不允许修改r222的值
    r111 = 0;
}
