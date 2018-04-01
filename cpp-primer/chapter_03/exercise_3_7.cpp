#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str("hello world!!!");
	for (char &c : str)
		c = 'X';
	cout << str << endl;
	return 0;
}
