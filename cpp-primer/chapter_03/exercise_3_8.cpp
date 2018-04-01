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
	/* while */
	decltype(str.size()) i = 0;
	while (i < str.size()){
		str[i] = 'X';
		i++;
	}	
	cout << str << endl;
	
	/* for */
	for (i = 0; i < str.size(); i++)
		str[i] = 'X';
	cout << str << endl;
	return 0;
}
