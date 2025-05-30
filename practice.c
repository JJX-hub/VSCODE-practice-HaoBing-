// #include <stdio.h>

// int main()
// {
//     int i;

//     scanf("m%d", &i); //m123 是正确的输入 123是非法的输入
//     printf("i = %d\n", i);

//     return 0;
// }


// //scanf函数最好不要加\n
// #include <stdio.h>

// int main(void)
// {
//     int i;
//     char ch;

//     scanf("%d", &i);
//     printf("i = %d\n", i);

//     while ((ch = getchar()) != '\n')
//         continue;
    
//     int j;
    
//     scanf("%d", &j);
//     printf("j = %d\n", j);

//     return 0;
// }


// //非输入控制符需要原样输入
// #include <stdio.h>

// int main(void)
// {
//     int i, j, k;

//     scanf("%d, %d, %d", &i, &j, &k);
//     printf("%d,%d,%d", i, j, k);

//     return 0;
// }


// //互换两个数字，设定一个中间变量存储数字
// #include <stdio.h>

// int main()
// {
//     int i, j, k;

//     i = 12;
//     j = 24;

//     k = i;
//     i = j;
//     j = k;

//     printf("i = %d, j = %d\n", i, j);
//     return 0;
// }


// //编写代码完成a是最大值，b是中间值，c是最小值
// #include <stdio.h>

// int main()
// {
//     int a, b, c, i;

//     a = 5;
//     b = 25;
//     c = 1;

//     if (a > b)
//     {
//         /* code */
//     }
//     else
//     {
//         i = a;
//         a = b;
//         b = i;
//     }

//     if (a > c)
//     {
//         /* code */
//     }
//     else
//     {
//         i = a;
//         a = c;
//         c = i;
//     }

//     if (b > c)
//     {
//         /* code */
//     }
//     else
//     {
//         i = b;
//         b = c;
//         c = i;
//     }
    
//     printf("%d, %d, %d", a, b, c);
//     return 0;
// }

// //求0-10的和
// #include <stdio.h>

// int main()
// {
//     int i;
//     int sum = 0;

//     for ( i = 0; i <= 10; i++)
//     {
//         sum = sum + i;
//         /* code */
//     }
//     printf("%d\n", sum);

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int m, n;
//     m = n = 11;
//     ++m;
//     n++;
//     printf("%d, %d\n", m, n);


//     return 0;
// }


// //计算0-100所有奇数的和
// #include <stdio.h>

// int main()
// {
//     int sum = 0;
//     int i;
//     for (i = 1; i < 100; i+=2)
//     {
//         sum = sum + i;
//     }
//     printf("i = %d\n", i);
//     printf("sum = %d\n", sum);

//     return 0;
// }


// //求1-100之间所有的能被3整除的数的和
// #include <stdio.h>
// int main()
// {
//     int i;
//     int sum = 0;

//     for (i = 1; i <= 100; i++)
//     {
//         if (i % 3 == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     printf("sum = %d\n", sum);
    
//     return 0;
// }


// //求1-100之间的奇数之和
// //求1-100之间奇数的个数
// //求1-100之间奇数的平均值
// //求1-100之间奇数之和与偶数之和
// #include <stdio.h>

// int main()
// {
//     int i;
//     int sum = 0;
//     int count = 0;
//     int avg = 0;
//     int sum1 = 0;
//     int sum2 = 0;

//     for (i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 1)
//         {
//             sum += i; //奇数之和
//             count++; //奇数个数
//         }
//         else
//         {
//             sum1 += i; //偶数之和
//             sum2++; //偶数个数
//         }
//     }
//     avg = sum / count; //平均值

//     printf("sum = %d\n", sum);
//     printf("count = %d\n", count);
//     printf("avg = %d\n", avg);
//     printf("sum1 = %d\n", sum1);
//     printf("sum2 = %d\n", sum2);

//     return 0;
// }


// //求1+1/2+1/3+1/4+...+1/100的和
// #include <stdio.h>
// int main()
// {
//     int i;
//     double sum = 0.0;

//     for (i = 1; i <= 100; i++)
//     {
//         sum += 1.0 / i; //注意这里要加上1.0，避免整形相除
//     }
//     printf("sum = %f\n", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float i;
//     i = 2.0/3;

//     printf("i = %f\n", i); //整形相除，结果为0

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int i;

//     i = getchar(); //获取一个字符
//     while (i != EOF) //EOF是一个宏定义，表示文件结束符
//     {
//         putchar(i); //输出一个字符
//         i = getchar(); //获取下一个字符
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     long i = 0;

//     while (getchar() != EOF) //EOF是一个宏定义，表示文件结束符
//     {
//         i++;
//     }
//     printf("i = %ld\n", i); //输出EOF的值
    
// }



#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int average;
    int count = 0; 

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            sum += i; //奇数之和
            count++; //奇数个数
        }
    }
    average = sum / count; //平均值
    printf("sum = %d\n", sum);  //奇数之和
    printf("count = %d\n", count);  //奇数个数
    printf("average = %d\n", average);  //平均值

}