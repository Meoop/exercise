#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    /* 使用getline读取一整行 */
    /* ./a.out < book_sales */
    string line;
    while (getline(cin, line)){
		if (!line.empty())
        	cout << line << endl;
		if (line.size() > 30)
			cout << line << endl;
	}
    return 0;
}
