#include <stdio.h>

void sort(int * arr, int len)
{
    int i, j, t;

    for ( i = 0; i < len - 1; i++)
    {
        for ( j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t; // 交换两个元素的值
            }
        }
    }
}

int main(void)
{
    int arr[6] = {5, 3, 6, 7, 5, 4};
    int len = sizeof(arr) / sizeof(arr[0]); //计算数组的长度
    int i;

    printf("%d\n", arr);
    printf("%d\n", sizeof(arr));
    printf("%d\n", arr[0]);
    printf("%d\n", sizeof(arr[0]));

    sort(arr, len);
    printf("排序后的数组为：\n");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}