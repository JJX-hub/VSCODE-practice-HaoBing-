// 编写一个打印EOF值的程序
#include <stdio.h>

int main()
{
    printf("EOF = %d\n", EOF); //输出EOF的值
    //printf("EOF = %f\n", EOF); //输出EOF的值，不应该这样用，因为EOF是整形常量，不能用浮点数输出
}