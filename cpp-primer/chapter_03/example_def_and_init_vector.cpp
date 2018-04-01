#include <iostream>
#include <vector>
using std::string;
using std::vector;

int main()
{
    vector<int> ivec;         //初始状态为空
    vector<int> ivec2(ivec);  //把ivec的值拷贝给ivec2
    vector<int> ivec3 = ivec; //把ivec的值拷贝给ivec3

    vector<string> v1{ "a", "an", "the" }; //列表初始化

    vector<int> ivec4(10, -1);      //10个int型的元素，每个都是-1
    vector<string> svec(10, "hi!"); //10个string型的元素，每个都是"hi!"

    vector<int> ivec5(10);    //10个元素，每个都是0
    vector<string> svec2(10); //10个元素，每个都是空的string类型

    vector<int> iv1(10);      //iv1有10个元素，每个的值都是0
    vector<int> iv2{ 10 };    //iv2有1个元素，该元素的值是10
    vector<int> iv3(10, 1);   //iv3有10个元素，每个的值都是1
    vector<int> iv4{ 10, 1 }; //iv4有2个元素，值分别是10，1

    vector<string> sv1{ "hi" };
    vector<string> sv2{ 10 };       //sv2有10个默认初始化的元素
    vector<string> sv3{ 10, "hi" }; //sv3有10个默认值为"hi"的元素

    return 0;
}
