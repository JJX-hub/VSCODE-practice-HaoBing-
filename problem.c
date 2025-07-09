// //scanf和getchar的使用区别
// #include <stdio.h>
// #define SIZE 10

// int main() {
//     int i;
//     char a[SIZE];
    
//     printf("请输入%d个字符：\n", SIZE);
//     for(i = 0; i < SIZE; i++) {
//         printf("第%d个字符：", i+1);
//         if(scanf(" %s", &a[i]) != 1) { 
//             printf("输入无效，请重新输入！\n");
//             while(getchar() != '\n'); // 清空输入缓冲区
//             i--; // 重试当前输入    
//             continue;
//         }
//         else
//         {
//             printf("i = %d\n", i);
//         }
//     }

//     printf("\n输入的字符为：");
//     for(i = 0; i < SIZE; i++) {
//         printf("%c", a[i]);
//     }
//     printf("\n");

//     return 0;
// }



//结构体
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int age;
    char sex;
    float score;
}; // 分号不能省略
// 前面这一块叫结构体 

int main(void)
{
    struct Student st;
    
    // struct Student st = // 这个叫结构体变量
    // {
    //     "张三",
    //     20,
    //     'M',
    //     100.0
    // };
    struct Student * pst = &st;

    pst -> age = 20;
    // strcpy(pst -> name, "张三");
    // st.name[0] = '1';
    // st.name[1] = '2';
    strcpy(pst->name, "12");  // 正确初始化字符串
    st.sex = 'F';

    printf("%d %c %s\n", st.age, st.sex, st.name);
    printf("%c\n", st.name[0]);
    printf("%c\n", st.name[1]);
    
    return 0;
}