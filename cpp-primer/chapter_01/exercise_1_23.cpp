#include <iostream>
#include "Sales_item.h"
int main()
{
    //currItem是我们正在统计；我们将读如的新值存入item
    Sales_item currItem, item;
    //读取第一个，并确保确实有数据可以处理
    if (std::cin >> currItem) {
        int cnt = 1;        //保存我们正在处理的当前值的个数
        while (std::cin >> item) {  //读取剩余的值
            if (item.isbn() == currItem.isbn())   //如果值相同
                ++cnt;              //将cnt加1
            else {                  //否则打印前一个值的个 
                std::cout << currItem << " occurs " << cnt << " times " << std::endl;
                currItem = item;    //记住新值
                cnt = 1;            //重置计数器
            }
        }//while循环结束
        //打印文件中最后一个值的个数
        std::cout << currItem << " occurs " << cnt << " times " << std::endl;
    }//结束if
    return 0;
}
