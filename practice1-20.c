// // 验证\t占的大小
// #include <stdio.h>

// int main(void)
// {
//     printf("1\t1\n");
//     printf("22\t1\n");
//     printf("2244\t1\n");
//     printf("2244555555\t1\n");

//     return 0;
// }
/*
编写程序detab，将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符中止位的地方
*/

#include <stdio.h>
#define TAB_SIZE 8 // 定义制表符中止位的大小为8个空格

int main(void)
{
    int c, nb, pos;

    nb = 0; // 初始化空格计数器
    pos = 1; // 初始化当前的位置为1
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            nb = TAB_SIZE - (pos - 1) % TAB_SIZE;
            while (nb > 0)
            {
                putchar(' ');
                ++pos;
                --nb;
            }
        }
        else if (c == '\n') // 新的一行
        {
            putchar(c);
            pos = 1;
        }
        else
        {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}