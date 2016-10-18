#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "bool is " << sizeof(bool) << "bytes." << endl;
    cout << "char is " << sizeof(char) << "bytes." << endl;
    cout << "wchar_t is " << sizeof(wchar_t) << "bytes." << endl;
    cout << "char16_t is " << sizeof(char16_t) << "bytes." << endl;
    cout << "char32_t is " << sizeof(char32_t) << "bytes." << endl;
    cout << "short is " << sizeof(short) << "bytes." << endl;
    cout << "int is " << sizeof(int) << "bytes." << endl;
    cout << "long is " << sizeof(long) << "bytes." << endl;
    cout << "long long is " << sizeof(long long) << "bytes." << endl;
    cout << "float is " << sizeof(float) << "bytes." << endl;
    cout << "double is " << sizeof(double) << "bytes." << endl;
    cout << "long double is " << sizeof(long double) << "bytes." << endl;
    return 0;
}
