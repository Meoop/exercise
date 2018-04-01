#include <iostream>
#include "Sales_item.h"
/*
 * 读取多个具有相同isbn的销售记录，输出所有记录的和
 */
int main()
{
    Sales_item item_all, item;
    if (std::cin >> item_all) {  //读取第一条记录，确保有数据可读
        while (std::cin >> item) { //读取其余记录
            item_all += item;
        }
        std::cout << item_all << std::endl;
    }
    else {
        //没有输入
        std::cout << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
