#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str;
	cout << "Enter string: " << endl;
	cin >> str;
	for (auto c : str)
		if (!ispunct(c))
			cout << c;
	cout << endl;
	return 0;
}
