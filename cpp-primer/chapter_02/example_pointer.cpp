#include <iostream>
#include <cstdlib>
int main()
{
    int *ip1, *ip2;                 //ip1和ip2都是指向int型对象的指针
    double dp, *dp2;                //dp2是指针，dp时double型对象
    int ival = 42;
    int *p = &ival;                 //p存放ival的地址
    std::cout << *p << std::endl;   //输出42
    *p = 0;
    std::cout << *p << std::endl;   //输出0

    double dval;
    double *pd = &dval;
    double *pd2 = pd;

    //null pointer
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;

    //void pointer
    double obj = 3.14, *pdo = &obj;
    void *pv = &obj;                //void可以存放任意类型的对象的地址
    pv = pdo;
   
    //一条定义语句可能定义出不同类型的变量
    int i = 1024, *p_i = &i, &r_i = i;

    //指向指针的指针
    int *pi = &ival;                //pi指向int型的一个数
    int **ppi = &pi;                //ppi指向int型的一个指针
    std::cout << "The value of ival\n"
              << "direct value: " << ival << "\n"
              << "indirect value: " << *pi << "\n"
              << "doubly indirect value: " << **ppi << std::endl;

    //指向指针的引用
    int *&rp = p;                   //r是一个对指针p的引用

    return 0;
}
