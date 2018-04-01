#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	/* 读写string对象 */
    string s;				//空字符串
    cin >> s;				//读入s，知道出现空白
    cout << s << endl;		//输出s
    
	/* 多个输入输出 */
    string s1, s2;
    cin >> s1 >> s2;			//输入，第一个输入s1，第二个输入s2
    cout << s1 << s2 << endl;	//输出两个string
	
	/* 比较string */
	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";
	cout << "str > phrase:" << (str > phrase) << endl;  	//0
    cout << "phrase > slang:" << (phrase > slang) << endl;	//0

	/* 两个对象相加 */
	string s3 = s1 + s2;	
	cout << "s1+s2:" << s3 << endl;

	/* 字面值和string相加 */
	/* 两侧的运算对象至少有一个是string */	
	string s4 = s1 + ", ";
	
	return 0;
}
