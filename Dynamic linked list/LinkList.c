#include "LinkList.h"
#include <stdbool.h>
#include <stdio.h>

//初始化链表
struct LinkListNode* InitLinkList()
{
    //头节点,不存数据
    struct LinkListNode* header = malloc(sizeof(struct LinkListNode));
    header->data = 1;
    header->pNext = NULL;

    //尾部指针
    struct LinkListNode* pTail = header;

    int val = -1;
    while (true)
    {
        printf("输入插入的函数:\n");
        scanf("%d", &val);
        if (val == -1)
        {
            break;
        }

        //先创建新节点
        struct LinkListNode* pnewnode = malloc(sizeof(struct LinkListNode));
        pnewnode->data = val;
        pnewnode->pNext = NULL;

        //新节点插入到链表中
        pTail->pNext = pnewnode;
        //更新尾部指针
        pTail = pnewnode;
    }
    //返回头节点，相当于返回列表
    return header;
    
}
//在值为oldval的后面插入一个新的数据newval
void InsertByValue_Linklist(struct LinkListNode* pHead, int oldval, int newval)
{
    if(pHead == NULL)
    {
        return;
    }

    //两个辅助指针变量
    struct LinkListNode* pPrev = pHead;
    struct LinkListNode* pCurrent = pPrev->pNext;

    while(pCurrent != NULL)
    {
        if(pCurrent->data == oldval)
        {
            break;
        }

        //更新指针
        pPrev = pCurrent;
        pCurrent = pCurrent->pNext;
    }
    //加注释之后，如果没有找到值为oldval的节点，那么就加到链表的末尾
    //如果pCurrent为空，说明链表中不存在值为oldval的节点
    // if(pCurrent == NULL)
    // {
    //     printf("未找到值为%d的节点\n", oldval);
    //     return;
    // }
    //创建新节点
    struct LinkListNode* pnewnode = malloc(sizeof(struct LinkListNode));
    pnewnode->data = newval;
    pnewnode->pNext = NULL;
    //将新节点插入到链表中
    pnewnode->pNext = pCurrent;
    pPrev->pNext = pnewnode;
}
//删除值为val的节点
void DelByValue_linklist(struct LinkListNode* pHead, int val)
{
    if(pHead == NULL)
    {
        return;
    }

    //两个辅助指针变量
    struct LinkListNode* pPrev = pHead;
    struct LinkListNode* pCurrent = pPrev->pNext;

    while(pCurrent != NULL)
    {
        if(pCurrent->data == val)
        {
            break;
        }
        //更新指针
        pPrev = pCurrent;
        pCurrent = pCurrent->pNext;
    }

    if(pCurrent == NULL)
    {
        printf("未找到值为%d的节点\n", val);
        return;
    }
    //删除节点
    pPrev->pNext = pCurrent->pNext;
    //释放节点内存
    free(pCurrent);
    pCurrent = NULL;    //在 free(pCurrent) 之后，pCurrent 指针本身仍然存在，但它指向的内存已经被释放
}
//遍历链表
void Traverse_Linklist(struct LinkListNode* pHead)
{
    if(pHead == NULL)
    {
        printf("链表为空\n");
        return;
    }
    //辅助指针变量
    struct LinkListNode *pCurrent = pHead->pNext;

    while(pCurrent != NULL)
    {
        printf("%d", pCurrent->data);
        pCurrent = pCurrent->pNext;
    }
}
//销毁链表
void Destroy_Linklist(struct LinkListNode* pHead)
{
    if(pHead == NULL)
    {
        return;
    }

    //辅助指针变量
    struct LinkListNode* pCurrent = pHead;

    while(pCurrent != NULL)
    {
        //先保存当前节点的下一个节点地址，不然后面找不到
        struct LinkListNode* Next = pCurrent->pNext;
        //释放当前节点内存
        free(pCurrent);
        //pCurrent更新为下一个节点
        pCurrent = Next;
    }
}
//清空链表
void Clear_Linklist(struct LinkListNode* pHead)
{
    if(pHead == NULL)
    {
        return;
    }

    //辅助指针变量
    struct LinkListNode* pCurrent = pHead->pNext;
    while(pCurrent != NULL)
    {
        //先保存当前节点的下一个节点地址，不然后面找不到
        struct LinkListNode* Next = pCurrent->pNext;
        //释放当前节点内存
        free(pCurrent);
        //pCurrent更新为下一个节点
        pCurrent = Next;
    }
    //头节点的下一个节点设为空
    pHead->pNext = NULL;
}