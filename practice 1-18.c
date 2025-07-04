/*
练习1-18：
编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行。
*/

#include <stdio.h>
#define MAXLINE 1000 //定义足够的缓冲区大小

int getline(char line[], int maxline);
int shanchu(char s[]);
// void copy(char to[], char from[]);

int main(void)
{
    // int len; // 当前行的长度
    // int max; // 最大行的长度
    char line[MAXLINE]; // 存储当前行
    // char longest[MAXLINE]; // 存储最长的行

    // max = 0; // 初始化最大长度为0

    while (getline(line, MAXLINE) > 0) // 读取每一行
    {
        if (remove(line) > 0) // 如果当前行的长度大于最大长度
        {
            printf("%s", line); // 输出当前行
        }
    }

    // if (max > 0) // 如果有输入
    //     printf("最长的行是：%s", longest); // 输出最长的行

    return 0; // 返回0，表示程序正常结束
}

int shanchu(char s[])
{
    int i;
    i = 0;

    while (s[i] != '\n') // 找到新的行
    {
        ++i; // 增加索引
    }
    --i; //减少索引，指向换行符的前一个位置
    
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
    {
        --i; // 向前移动索引，直到遇到非空格或非制表符的字符
    }
    if (i >= 0)
    {
        ++i; // 增加索引，指向下一个位置
        s[i] = '\n';
        ++i; // 增加索引，指向字符串结束符的位置
        s[i] = '\0'; // 添加字符串结束符，直接代表字符串结束
    }

    return i; // 返回当前行的长度
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


//复制函数，在这里不需要
// void copy(char to[], char from[])
// {
//     int i;

//     i = 0;
//     while ((to[i] = from[i]) != '\0') // 逐个字符复制
//         ++i; // 增加索引
// }