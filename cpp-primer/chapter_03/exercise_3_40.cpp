#include <cstring>
#include <iostream>

using std::endl;
using std::cout;

int main()
{
    char cs1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    char cs2[] = { 'w', 'o', 'r', 'l', 'd', '\0' };
    char cs3[100];
    strcpy(cs3, cs1);
    strcat(cs3, " ");
    strcat(cs3, cs2);
    cout << cs3 << endl;
    return 0;
}
