#include <iostream>

int main()
{
    int arr[10];
    for (int *ba = arr; ba != arr + 10; ++ba)
        *ba = 0;
    return 0;
}
