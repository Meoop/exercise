#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	/* 读取未知数量的string对象 文件结尾标志ctrl+D */
	string word;
	while (cin >> word)			//反复读取，直至文件结尾
		cout << word << endl;   //逐个输出单词
	return 0;	
}
