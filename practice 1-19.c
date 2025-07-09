/*
练习1-19：
编写函数reverse(s)，将字符串s中的字符顺序颠倒过来。使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序。
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char s[]);
// void copy(char to[], char from[]);

int main(void)
{
    char line[MAXLINE]; // 存储当前行

    while ((getline(line, MAXLINE)) > 0) // 读取每一行
    {
        reverse(line); // 调用reverse函数颠倒字符顺序
        printf("当前行颠倒后的内容为：%s", line); // 输出颠倒后的行
    }

    return 0; // 返回0，表示程序正常结束
}

void reverse(char s[])
{
    int i, j;
    char temp;

    for (i = 0, j = 0; s[j] != '\0'; j++) // 找到字符串的长度  这个方法好
        ; // 空循环，仅用于计算j的值

        j--; // j现在指向字符串的最后一个字符
    if (s[j] == '\n') // 如果最后一个字符是换行符
        j--; // 那就再倒退一位

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp; // 交换字符
        i++; // 增加左边索引
        j--; // 减少右边索引
    }
        
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

// void copy(char to[], char from[])
// {
//     int i;

//     i = 0;
//     while ((to[i] = from[i]) != '\0') // 逐个字符复制
//         ++i; // 增加索引
// }