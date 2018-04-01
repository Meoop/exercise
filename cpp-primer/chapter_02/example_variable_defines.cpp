#include <iostream>
#include "Sales_item.h"
/*
 * 2.2.1 变量定义
 */
int main()
{
    //定义sum，value，units_sold都是int
    //sum和units_sold的值都为0
    int sum = 0, value, units_sold = 0 ;
    //item的类型为Sales_item
    Sales_item item;
    //string是一种库类型，表示一个可变长的字符序列
    //book通过一个string字面值初始化
    std::string book("0-201-78345-X");
    
    //正确
    double price = 109.00, discount = price * 0.16;
    //正确
    //double salePrice = applyDiscount(price, discount);

    int units_soldi_1 = 0;
    int units_soldi_2 = {0};  //列表初始化，如果存在丢失信息风险，则编译器将报错
    int units_soldi_3{0};
    int units_soldi_4(0);

    return 0;
}
