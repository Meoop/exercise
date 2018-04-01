#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string str, str_s, sin;
	while (cin >> sin){
		str += sin;
		str_s = str_s + sin + " ";
	}
	cout << str << endl;
	cout << str_s << endl;
	return 0;
}
