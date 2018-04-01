#include <iostream>
#include <string>
using std::string;
int main()
{
    string s1;				//默认初始化，s1是一个空串
    string s2 = s1;			//s2是s1的一个副本
    //拷贝初始化
    string s3 = "hiya";			//s3是该字符串的字面值副本
    //直接初始化
    string s3_1("hiya");		//同上
    //直接初始化
    string s4(10, 'c'); 		//s4的内容是nnnnnnnnnn
    return 0;
}
