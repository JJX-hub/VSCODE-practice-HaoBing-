#pragma once

#include <stdlib.h>

#ifdef __cplusplus  // 如果是 C++ 编译器
extern "C" {    // 开始 C 语言链接方式
#endif

//定义节点数据类型
struct LinkListNode
{
    int data;
    struct LinkListNode* pNext;
};

//初始化链表
struct LinkListNode* InitLinkList();
//在值为oldval的后面插入一个新的数据newval
void InsertByValue_Linklist(struct LinkListNode* pHead, int oldval, int newval);
//删除值为val的节点
void DelByValue_linklist(struct LinkListNode* pHead, int val);
//遍历链表
void Traverse_Linklist(struct LinkListNode* pHead);
//销毁链表
void Destroy_Linklist(struct LinkListNode* pHead);
//清空链表
void Clear_Linklist(struct LinkListNode* pHead);

#ifdef __cplusplus  // 如果是 C++ 编译器
}   
#endif  // 结束 C 语言链接方式