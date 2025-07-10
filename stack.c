#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef struct {
    char url[MAX_STACK_SIZE];
} StackItem;

typedef struct {
    StackItem items[MAX_STACK_SIZE];
    int top;
} Stack;

void initStack(Stack *stack) {
    stack->top = -1;
}

int isStackEmpty(Stack *stack) {
    return stack->top == -1;
}

int isStackFull(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

void push(Stack *stack, char *url) {
    if (isStackFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }
    stack->top++;
    strcpy(stack->items[stack->top].url, url);
}

char* pop(Stack *stack) {
    if (isStackEmpty(stack)) {
        printf("Stack underflow!\n");
        return NULL;
    }
    char *url = stack->items[stack->top].url;
    stack->top--;
    return url;
}

int main() {
    char inputurl[MAX_STACK_SIZE];
    int choice;
    Stack stack;
    initStack(&stack);

    while (1)
    {
        printf("------》1:入栈\n");
        printf("------》2:出栈\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("请输入入栈内容：");
            scanf("%s",inputurl);
            push(&stack,inputurl);
            printf("入栈成功\n");
            break;
        case 2:
            if (!isStackEmpty(&stack)) {
                char *url = pop(&stack);
                printf("出栈：%s\n", url);
            }else{
                printf("已没有数据\n");
            }
            break;
        default:
            printf("无效操作\n");
            break;
        }
    }
    return 0;
}
