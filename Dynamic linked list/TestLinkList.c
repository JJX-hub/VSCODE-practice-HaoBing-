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
    //插入数据在300后面插入666 100 200 300 666 400 500
    InsertByValue_Linklist(header, 300, 666);

    printf("--------------\n");
    //打印链表
    Traverse_Linklist(header);

    //清空链表
    printf("\n---------------\n");
    printf("清空链表后\n");
    Clear_Linklist(header);
    //打印链表
    Traverse_Linklist(header);

    printf("插入新的节点\n");
    InsertByValue_Linklist(header, 300, 100);
    InsertByValue_Linklist(header, 300, 200);
    InsertByValue_Linklist(header, 300, 400);
    InsertByValue_Linklist(header, 300, 500);

    //打印链表
    Traverse_Linklist(header);
    printf("\n-----------------\n");
    //删除值为200的节点
    DelByValue_linklist(header, 200);
    //打印链表
    Traverse_Linklist(header);
    printf("\n-----------------\n");
    //销毁链表
    Destroy_Linklist(header);
}

int main(void)
{
    test();

    printf("\n");
    system("pause");
    return EXIT_SUCCESS;//返回成功，等同于return 0; 只是为了让代码意图看起来更清晰 
}

//gcc -Wall -Wextra -g LinkList.c TestLinkList.c -o TestLinkList.exe