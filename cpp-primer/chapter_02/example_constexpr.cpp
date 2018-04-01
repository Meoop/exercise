#include <iostream>
#include <cstdlib> 
/**
 * 2.4.4 constexpr
 */

int j = 0;
constexpr int i = 42;

int main()
{
    //常量表达式是指值不会改变并且在编译过程中就能得到计算机过的表达式
    const int max_files = 20;               //max_files is a const expression
    const int limit = max_files + 1;        //limit is a const expression
    int staff_size = 27;                    //staff_size is not a const expression
    
    constexpr int mf = 20;                  //20是常量表达式
    constexpr int limitt = mf + 1;          //mf+1是常量表达式
    
    const int *p = nullptr;                 //p是一个指向整形常量的指针
    constexpr int *q = nullptr;             //q是一个常量指针，constexpr定义的是一个顶层const

    constexpr int *np = nullptr;            
    constexpr const int *pp = &i;           //pp指向i
    constexpr int *pl = &j;                 //pl指向j
    
    return 0;
}


