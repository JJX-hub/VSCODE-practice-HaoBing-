/*
练习1-16
修改打印最长文本行的程序的主程序main，使之可以打印任意长度的输入行的长度，并尽可能多地打印文本
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len; // 当前行的长度
    int max; // 最大行的长度
    char line[MAXLINE]; // 存储当前行
    char longest[MAXLINE]; // 存储最长的行

    max = 0; // 初始化最大长度为0

    while ((len = getline(line, MAXLINE)) > 0) // 读取每一行
    {
        printf("当前行的长度为：%d\n", len);
        printf("当前行的内容为：%s", line);
        // if (len > max) // 如果当前行的长度大于最大长度
        // {
        //     max = len; // 更新最大长度
        //     copy(longest, line); // 复制当前行到最长行
        // }
    }

    // if (max > 0) // 如果有输入
    //     printf("最长的行是：%s", longest); // 输出最长的行

    return 0; // 返回0，表示程序正常结束
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c; // 将字符存入数组
    if (c == '\n') // 如果遇到换行符
    {
        s[i] = c; // 将换行符存入数组
        ++i; // 增加长度
    }
    s[i] = '\0'; // 添加字符串结束符

    return i; // 返回当前行的长度
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') // 逐个字符复制
        ++i; // 增加索引
}




// #include <stdio.h>
// #define MAXLINE 1000

// int getline(char line[], int maxline);
// void copy(char to[], char from[]);

// int main(void)
// {
//     int len; // 当前行的长度
//     int max; // 最大行的长度
//     char line[MAXLINE]; // 存储当前行
//     char longest[MAXLINE]; // 存储最长的行

//     max = 0; // 初始化最大长度为0

//     while ((len = getline(line, MAXLINE)) > 0) // 读取每一行
//     {
//         if (len > max) // 如果当前行的长度大于最大长度
//         {
//             max = len; // 更新最大长度
//             copy(longest, line); // 复制当前行到最长行
//         }
//     }

//     if (max > 0) // 如果有输入
//         printf("最长的行是：%s", longest); // 输出最长的行

//     return 0; // 返回0，表示程序正常结束
// }

// int getline(char s[], int lim)
// {
//     int c, i;

//     for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//         s[i] = c; // 将字符存入数组
//     if (c == '\n') // 如果遇到换行符
//     {
//         s[i] = c; // 将换行符存入数组
//         ++i; // 增加长度
//     }
//     s[i] = '\0'; // 添加字符串结束符

//     return i; // 返回当前行的长度
// }

// void copy(char to[], char from[])
// {
//     int i;

//     i = 0;
//     while ((to[i] = from[i]) != '\0') // 逐个字符复制
//         ++i; // 增加索引
// }