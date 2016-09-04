#include <iostream>
/*
 * 2.1.2 类型转换
 */
int main()
{
    bool b = 42;          //b为真
    int i = b;            //i的值为1
    i = 3.14;             //i的值为3
    double pi = i;        //pi的值为3
    unsigned char c = -1; //假设char占8比特，c的值为255
    /* 编译错误  "conflicting declaration ‘signed char c’"
    signed char c = 256;  //假设char占8比特，c的值时未定义的
    */
    
    int i1 = 42;
    if (i1)                //if条件的值将为true
        i1 = 0;

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;    //正确，输出32
    std::cout << u2 - u1 << std::endl;    //正确，不过，结果是取模后的值

    unsigned u = 11;        //确定要输出的最大数，从比他大1的数开始
    while (u > 0){
        --u;                //先减1，这样最后输出的一个数是0
        std::cout << u << std::endl;
    }

    int a1 = -1, b1 = 1;
    std::cout << a1*b1 << std::endl;    //-1
    unsigned b2 = 1;
    std::cout << a1*b2 << std::endl;    //4294967295
    
    return 0;
}
