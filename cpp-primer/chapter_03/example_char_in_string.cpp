#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	/* 使用基于范围的for语句 */
	string str("some string");
	//每行输出str的中的一个字符
	for (auto c : str)
		cout << c << endl;
	
	string s("Hello World!!!");
	//punct_cnt的类型和s.size的返回类型一样
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))			//如果该字符是标点符号
			++punct_cnt;		//计数器加一
	cout << punct_cnt << " punctuation characters in " << s << endl;
	
	/* 使用范围for改变字符串中的字符 */
	for (auto &c : s)			//注意是引用
		c = toupper(c);
	cout << s << endl;
	
	/* 只处理一部分字符 */
	if (!s.empty())				//确保确实有字符
		cout << s[0] << endl;	//输出第一个字符
	
	if (!str.empty())				//确保确实有字符
		str[0] = toupper(str[0]);	//为s[0]赋一个新值
	cout << str << endl;
	
	/* 把str的第一个词改成大写 */
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	cout << s << endl;

	return 0;
}
	
