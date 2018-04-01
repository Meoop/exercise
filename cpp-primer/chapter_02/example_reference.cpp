#include <iostream>
int main()
{
    int ival = 1024;
    int &refVal = ival;             //refVal指向ival
    int &refVal2;                   //报错，引用必须被初始化

    refVal = 2;                     //把2赋值给refVal所指向的变量
    int ii = refVal;                //ii的值为refVal所指向的值

    //正确
    int &refVal3 = refVal;
    //正确
    int in = refVal;

    int i = 1024, i2 = 2048;        //i和i2都是int
    int &r = i, r2 = i2;            //r是一个引用，与i绑定在一起，r2是int
    int i3 = 1024, &ri = i3;        //i3是int，ri是一个引用
    int &r3 = i3, &r4 = i2;         //r3和r4都是引用

    int &refVal4 = 10;              //错误，引用必须是一个对象
    double dval = 3.14;
    int &refVal5 = dval;            //错误，此处引用的初始值必须是int

    return 0;
}
