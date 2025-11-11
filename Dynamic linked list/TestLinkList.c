#define _CRT_SECURE_NO_WARNINGS
#include "LinkList.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test()
{
    //初始化链表
    struct LinkListNode* header = InitLinkList();
    //打印链表
    Traverse_Linklist(header);
}

int main(void)
{
    test();

    printf("\n");
    system("pause");
    return EXIT_SUCCESS;//返回成功，等同于return 0; 只是为了让代码意图看起来更清晰 
}

//gcc -Wall -Wextra -g LinkList.c TestLinkList.c -o TestLinkList.exe