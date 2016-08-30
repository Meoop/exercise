#include <iostream>
int main()
{
    std::cout << "/*";  //  /*
    std::cout << "*/";  // */
//    std::cout << /* "*/" */;  error
    std::cout << /* "*/" /* "/*" */;  // /*
    return 0;
}
