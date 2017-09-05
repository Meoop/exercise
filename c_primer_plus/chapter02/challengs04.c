#include <stdio.h>
void function_1(void);              /* 夸赞     */
void function_2(void);              /* 最后一行 */
int main(void)
{
    function_1();
    function_1();
    function_1();
    function_2();
    return 0;
}

void function_1(void)
{
    printf("For he's a jolly good fellow!\n");
}

void function_2(void)
{
    printf("Which nobody can deny!\n");
}
