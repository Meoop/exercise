#include <iostream>
/**
 * 2.4.2 pointer and const
 */
int main()
{
    const double pi = 3.14;         //pi是一个常量
    const double *cptr = &pi;       //正确，cptr可以指向一个双精度常量
    
    double dval = 3.14;             //dval的值可以改变
    cptr = &dval;                   //不能通过cptr改变值

    int errNum = 0;
    int *const curErr = &errNum;    //curErr将一直指向errNum
    const double *const pip = &pi;  //pip是一个指向常量对象的常量指针

    if (*curErr) {
        //handler error
        *curErr = 0;
    }
    return 0;
}

