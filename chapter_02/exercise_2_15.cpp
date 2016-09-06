#include <iostream>
int main()
{
    //正确
    int ival = 1.01;
    //错误 
    int &rval1 = 1.01;
    //正确
    int &rval2 = ival;
    //错误
    int &rval3;
    
    return 0;
}
