#include <iostream>
#include <string>

using std::string;

int main()
{
    constexpr unsigned sz = 42; //常量表达式
    int arr[10];                //含有10个整数的数组
    int* parr[sz];              //含有42个整形指针的数组

    const unsigned sz_0 = 3;
    int ia1[sz_0] = { 0, 1, 2 }; //含有三个元素的数组
    int a2[] = { 0, 1, 2 };
    int a3[5] = { 0, 1, 2 };       //等价于a3[5]={0,1,2,0,0}
    string a4[3] = { "hi", "bey" }; //等价于a4[3]={"hi" ,"bey", ""}

    char c1[] = { 'C', '+', '+' };
    char c2[] = { 'C', '+', '+', '\0' };
    char c3[] = "C++";

    int *ptrs[10];              //ptrs是含有10个整形指针的数组
    int (*Parray)[10] = &arr;   //Parray指向一个含有10个整数的数组
    int (&arrRef)[10] = arr;    //arrRef引用一个含有10个整数的数组

    return 0;
}
