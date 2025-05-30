/*
验证表达式getchar()的返回值是否为EOF
 */
#include <stdio.h>

int main()
{
    int i;
    i = getchar(); //获取一个字符
    while (i != EOF) //EOF是一个宏定义，表示文件结束符
    {
        putchar(i); //输出一个字符
        i = getchar(); //获取下一个字符
    }
    printf("i = %d\n", i); //输出EOF的值

    return 0;
}