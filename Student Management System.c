#include <stdio.h>
#include <stdlib.h>

    // 定义结构体，应该在函数外或者头文件中
    struct Student
    {
        int id;
        char name[100];
        int age;
        float score;
    };

// 输入学生信息
void inputStudentInfo(int len, struct Student *pArr)
{
    int i;
    // struct Student
    // {
    //     int id;
    //     char name[100];
    //     int age;
    //     float score;
    // };

    // // 动态构造一维数组
    // printf("请输入你要存放的学生信息的个数：");
    // printf("len = ");
    // scanf("%d", &len);
    // struct Student *pArr = (struct Student *)malloc(len * sizeof(struct Student)); // 动态的构造了一个一维数组, 该一维数组的长度是len，数组名是students。每个元素是struct Student，类似于struct Student students[len];
    
    printf("请输入学生信息：\n");
    for ( i = 0; i < len; i++)
    {
        printf("第%d个学生的信息：\n", i + 1);
        printf("ID：");
        scanf("%d", &pArr[i].id);
        printf("姓名：");
        scanf("%s", pArr[i].name);
        printf("年龄：");
        scanf("%d", &pArr[i].age);
        printf("成绩：");
        scanf("%f", &pArr[i].score);
    }
}

// 打印学生信息
void printStudentInfo(int len, struct Student *pArr)
{
    int i;

    for ( i = 0; i < len; i++)
    {
        printf("------------------------\n");
        printf("学生信息为：\n");
        printf("ID：%d\n", pArr[i].id);
        printf("姓名：%s\n", pArr[i].name);
        printf("年龄：%d\n", pArr[i].age);
        printf("成绩：%.2f\n", pArr[i].score);
        printf("------------------------\n");
    }
}

// 排序学生信息
// 使用冒泡排序
void sort(int len, struct Student *pArr)
{
    int i, j;
    struct Student temp;

    for ( i = 0; i < len - 1; i++)
    {
        for ( j = 0; j < len - 1 - i; j++)
        {
            if (pArr[j].score > pArr[j + 1].score) // 按照成绩从小到大排序 降序就换成小于号
            {
                temp = pArr[j];
                pArr[j] = pArr[j + 1];
                pArr[j + 1] = temp;
            }
        }
    }
    
    
}

// 主函数，尽量简洁
int main(void)
{
    int len;

    // 动态构造一维数组
    printf("请输入你要存放的学生信息的个数：");
    printf("len = ");
    scanf("%d", &len);
    struct Student *pArr = (struct Student *)malloc(len * sizeof(struct Student)); // 动态的构造了一个一维数组, 该一维数组的长度是len，数组名是students。每个元素是struct Student，类似于struct Student students[len];

    if (pArr == NULL) // 检查内存分配是否成功
    {
        printf("内存分配失败！\n");
        return 1; // 返回非零值表示错误
    }

    // printf("size%d", sizeof(struct Student));
    // printf("size%d", sizeof(pArr[1].name));
    // printf("size%d", sizeof(int));
    // printf("size%d", sizeof(float));

    // 输入学生信息
    inputStudentInfo(len, pArr);
    // 排序学生信息
    sort(len, pArr);
    // 打印学生信息
    printStudentInfo(len, pArr);

    free(pArr); // 释放动态分配的内存
    return 0;
}