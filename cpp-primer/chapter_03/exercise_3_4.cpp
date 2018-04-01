#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << "两个字符串是否相同：" << (s1 == s2) << endl;
	if (s1 != s2) 
		cout << "较大字符串为：" << (s1>=s2?s1:s2) << endl;
	
	cout << "两个字符串是否等长：" << (s1.size() == s2.size()) << endl;
	if (s1 != s2) 
		cout << "较长字符串为：" << (s1.size()>=s2.size()?s1:s2) << endl;
	
	return 0;
}
