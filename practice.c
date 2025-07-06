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



// #include <stdio.h>

// int main()
// {
//     int i;
//     int sum = 0;
//     int average;
//     int count = 0; 

//     for (i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 1)
//         {
//             sum += i; //奇数之和
//             count++; //奇数个数
//         }
//     }
//     average = sum / count; //平均值
//     printf("sum = %d\n", sum);  //奇数之和
//     printf("count = %d\n", count);  //奇数个数
//     printf("average = %d\n", average);  //平均值

// }


// //前自增、后自增的区别
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int j = 0;

//     i = ++j; //前自增，先将j加1，然后将j的值赋给i
//     printf("i = %d, j = %d\n", i, j); //i = 1, j = 1

//     i = j++; //后自增，先将j的值赋给i，然后将j加1
//     printf("i = %d, j = %d\n", i, j); //i = 1, j = 2

//     return 0;
// }



// //三目运算符的使用
// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int max;

//     //使用三目运算符判断最大值
//     max = (a > b) ? a : b; //如果a大于b，则max为a，否则为b

// /*
//     //使用if-else语句判断最大值
//     if (a > b)
//     {
//         max = a; //如果a大于b，则max为a
//     }
//     else
//     {
//         max = b; //否则，max为b
//     }
// */

//     printf("max = %d\n", max); //输出最大值

//     return 0;
// }


// //逗号表达式
// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 2, c = 3;
//     int result;

//     //逗号表达式，先执行a++，然后执行b++，最后将c的值赋给result
//     result = (a++, b++, c);
    
//     printf("a = %d, b = %d, c = %d, result = %d\n", a, b, c, result); //输出结果

//     return 0;
// }


// //用while从1加到100
// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     int sum = 0;

//     while (i <= 100)//当i小于等于100时，执行循环体
//     {
//         sum += i; //将i的值累加到sum中
//         i++; //i自增1
//     }
//     printf("sum = %d\n", sum); //输出1到100的和
//     printf("i = %d\n", i); //输出i的值，应该是101
    
//     return 0;
// }


// // 判断是不是回文数
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int j = 0;
//     int sum = 0; //用于存储反转后的数字

//     printf("请输入一个整数：\n");//提示用户输入一个整数
//     scanf("%d", &i); //读取一个整数

//     j = i; //将i的值赋给j,方便后面比较
//     while (j)
//     {
//         sum = sum*10 + j % 10; //将j的最后一位数字加到sum中
//         j /= 10; //将j除以10，去掉最后一位数字，都是整数时不保留小数部分
//     }

//     if (sum == i) //如果反转后的数字等于原数字
//     {
//         printf("是回文数\n"); //输出是回文数
//     }
//     else
//     {
//         printf("不是回文数\n"); //输出不是回文数
//     }

//     return 0; //返回0，表示程序正常结束
// }


// // 斐波那契数列
// #include <stdio.h>

// int main()
// {
//     int n; //定义一个整数变量n，用于存储用户输入的序列号
//     int i = 1;
//     int j = 2;
//     int k = 0;
//     int m;

//     printf("请输入序列号:");
//     scanf("%d", &n); //读取一个整数

//     if (n == 1)
//     {
//         k = 1;;
//     }
//     else if (n == 2)
//     {
//         k = 2;
//     }
//     else
//     {
//         for (m = 3; m <= n; m++)
//         {
//             k = i + j;
//             i = j;
//             j = k; //将i和j的值更新为下一个斐波那契数
//         }
//     }
//     printf("第%d个斐波那契数是:%d\n", n, k); //输出第n个斐波那契数
    

//     return 0; // 返回0，表示程序正常结束
// }


// //输出前30个斐波那契数
// #include <stdio.h>

// int main()
// {
//     int i, j, k;
//     int n;
//     i = 1;
//     j = 2;

//     printf("%d, %d", i, j); // 输出前两个斐波那契数

//     for (n = 3; n <= 30; n++)
//     {
//         k = i + j;
//         printf(", %d", k); // 输出当前斐波那契数
//         i = j; // 更新i为j的值
//         j = k; // 更新j为当前斐波那契数k的值
//     }
    
//     return 0; // 返回0，表示程序正常结束
// }


// #include <stdio.h>

// int main()
// {
//     int value;

//     printf("请输入要进入的楼层数："); // 提示用户输入要进入的楼层数
//     scanf("%d", &value); // 读取用户输入的楼层数

//     switch (value) // 根据用户输入的楼层数进行选择
//     {
//         case 1:
//             printf("一楼：欢迎光临！\n"); // 如果输入1，输出一楼欢迎信息
//             break;
//         case 2:
//             printf("二楼：请慢走！\n"); // 如果输入2，输出二楼信息
//             break;
//         case 3:
//             printf("三楼：请注意安全！\n"); // 如果输入3，输出三楼信息
//             break;
//         default:
//             printf("没有这个楼层，请重新输入！\n"); // 如果输入其他数字，提示无效楼层
//             break;
//     }

//     return 0; // 返回0，表示程序正常结束
// }


// //break的使用示例
// #include <stdio.h>

// int main()
// {
//     int i, j;

//     for (i = 0; i < 3; i++)
//     {
//         for (i = 1; i < 4; i++)
//         {
//             break; // 这里的break会跳出内层循环
//         }
        
//     }
    
//     return 0; // 返回0，表示程序正常结束
// } 



// //continue的使用示例
// #include <stdio.h>
// int main()
// {
//     int i;

//     for (i = 0; i < 10; i++)
//     {
//         if (i % 2 == 0) // 如果i是偶数
//         {
//             continue; // 跳过当前循环，继续下一次循环
//         }
//         printf("%d ", i); // 输出奇数
//     }
//     printf("\n");

//     return 0; // 返回0，表示程序正常结束
// }


// #include <stdio.h>

// int main()
// {  
//     float i;

//     i = 1/3;
//     printf("i = %f\n", i); // 输出i的值，应该是0，因为1/2是整形相除，结果为0
//     i = 1.0/3; // 这里1.0是浮点数，结果为0.5   
//     printf("i = %f\n", i); // 输出i的值，应该是0，因为i是整形变量，0.5会被截断为0
//     i = 1.0/3.0; // 这里1.0和2.0都是浮点数，结果为0.5
//     printf("i = %f\n", i); // 输出i的值，应该是0，因为i是整形变量，0.5会被截断为0

//     return 0; // 返回0，表示程序正常结束
// }


// //do while循环的使用示例
// #include <stdio.h>
// int main()
// {
//     int i = 0;

//     do
//     {
//         printf("i = %d\n", i); // 输出i的值
//         i++; // i自增1
//     } while (i < 5); // 当i小于5时，继续循环

//     return 0; // 返回0，表示程序正常结束
// }


// //数组的使用示例
// #include <stdio.h>

// int main()
// {  
//     int a[5] = {1, 2, 3, 4, 5}; // 定义一个整型数组a，包含5个元素
//     int i;
//     int *p = a; // 定义一个整型指针p，指向数组a的首元素
//     for (i = 0; i < 5; i++)
//     {
//         printf("a[%d] = %d\n", i, *(p + i)); // 使用指针访问数组元素
//     }
//     return 0; // 返回0，表示程序正常结束
// }


// //数组
// #include <stdio.h>

// int main()
// {
//     int a[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // 定义一个整型数组a，包含8个元素
//     int i, j;
//     int t;

//     for (i = 0; i < 8; i++)
//     {
//         for (j = i + 1; j < 8; j++)
//         {
//             if (a[i] < a[j]) // 如果当前元素小于后面的元素
//             {
//                 t = a[i]; // 交换两个元素
//                 a[i] = a[j];
//                 a[j] = t;
//             }
//         }
//     }
//     printf("排序后的数组为：\n");
//     for (i = 0; i < 8; i++)
//     {
//         printf("%d ", a[i]); // 输出排序后的数组元素
//     }
// }


// //二维数组的使用

// #include <stdio.h>
// int main()
// {
//     int a[3][4] = { // 定义一个3行4列的二维数组
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };
//     int i, j;

//     printf("二维数组的元素为：\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("%d ", a[i][j]); // 输出二维数组的元素
//         }
//         printf("\n"); // 换行 
//     }

//     return 0; // 返回0，表示程序正常结束
// }


////函数
// #include <stdio.h>

// void f(void)
// {
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         printf("大家辛苦了！\n");
//         break; // 这里的break会跳出循环
//     }
//     printf("同志们好！\n"); // 这里的printf会被执行
    
// }

// int main(void)
// {
//     f(); // 调用函数f

//     return 0; // 返回0，表示程序正常结束
// }



// //函数的使用
// #include <stdio.h>

// int sushu(int n)
// {
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0; // 如果n能被i整除，说明n不是素数，返回0
//         }
//         else
//         {
//             return 1; // 如果n不能被i整除，说明n是素数，返回1
//         }
//     }
// }

// int main(void)
// {
//     int m; // 定义一个整数变量n，用于存储用户输入的整数

//     printf("请输入一个整数："); // 提示用户输入一个整数

//     scanf("%d", &m); // 读取用户输入的整数n
//     if (sushu(m) == 1) // 调用sushu函数判断n
//     {
//         printf("%d是素数\n", m); // 如果sushu函数返回1，输出n是素数
//     }
//     else
//     {
//         printf("%d不是素数\n", m); // 如果sushu函数返回0，输出n不是素数
//     }

//     return 0; // 返回0，表示程序正常结束
// }



// //求1到某个数字之间的所有素数，并将其输出
// #include <stdio.h>
// #include <stdbool.h> // 引入stdbool.h头文件以使用bool类型

// //本函数的功能是判断n是否是素数
// //如果是素数，返回true；否则，返回false
// bool is_prime(int n)
// {
//     int i;

//     if (n < 2)
//     {
//     return false; // 小于2的数不是素数
//     }

//     if (n == 2)
//     {
//         return true; // 2是素数
//     }

//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0) // 如果i能被j整除
//             break; // 不是素数，跳出内层循环
//     }
//     if (i == n) // 如果内层循环没有被break，说明i是素数
//         return true; // 是素数，返回true
//     else
//         return false; // 不是素数，返回false
// }

// //本函数的功能是遍历从2到n之间的所有素数，并将其输出
// //参数n是用户输入的整数
// void Traverse(int n)
// {
//     int i;

//     for (i = 2; i <= n; i++) // 从2开始遍历到n
//     {
//         if (is_prime(i)) // 调用is_prime函数判断i是否是素数
//         {
//             printf("%d \n", i); // 如果是素数，输出i
//         }
//     }
// }

// int main(void)
// {
//     int value;

//     printf("请输入一个整数："); // 提示用户输入一个整数
//     scanf("%d", &value); // 读取用户输入的整数

//     Traverse(value); // 调用Traverse函数遍历并输出素数

//     // for (i = 0; i < value; i++)
//     // {
//     //     if (is_prime(i)) // 调用is_prime函数判断i是否是素数
//     //     {
//     //         printf("%d \n", i); // 如果是素数，输出i
//     //     }
//     // }
//     return 0; // 返回0，表示程序正常结束
// }


// #include <stdio.h>
// #include <string.h> // 引入string.h头文件以使用strlen函数

// int main(void)
// {
//     char szStr1[] = {'1', '2', '3', '4', '5', '\0'}; // 定义一个字符数组szStr1，包含5个字符和一个结束符'\0'
//     char szStr2[6] = {'1', '2', '3', '4', '5', '6'}; //"12345"; // 定义一个字符串szStr3，包含5个字符和一个结束符'\0'
//     // 注意：szStr1和szStr3的内容是相同的，但定义方式不同。
//     // szStr1是一个字符数组，手动添加了结束符'\0'
//     char szStr3[6] = {'1', '2', '3', '4', '5', '0'}; // 定义一个字符数组szStr2

//     printf("szStr1 = %ld  %ld\n", strlen(szStr1), sizeof(szStr1)); // 输出szStr1的内容
//     printf("szStr2 = %ld  %ld\n", strlen(szStr2), sizeof(szStr2)); // 输出szStr2的内容
//     printf("szStr3 = %ld  %ld\n", strlen(szStr3), sizeof(szStr3)); // 输出szStr3的内容
// }


// #include <stdio.h>

// int main()
// {
//     int i, j;

//     // scanf("%d %d", &i, &j); // 从标准输入读取一个整数i
//     // printf("i = %d\n", i); // 输出读取的整数i
//     // printf("j = %d\n", j); // 输出读取的整数j

//     i = getchar(); // 获取一个字符
//     while (i != EOF) // 当i不是文件结束符时
//     {
//         putchar(i); // 输出字符i
//         i = getchar(); // 获取下一个字符
//     }

//     return 0;
// }


// //用指针互换两个数字
// #include <stdio.h>

// // void huhuan(int a, int b) 
// // {
// //     int temp; // 定义一个临时变量用于交换
// //     temp = a; // 将a的值存储到temp中
// //     a = b; // 将b的值赋给a
// //     b = temp; // 将temp的值赋给b
// // }
// void huhuan(int * p, int * q)
// {
//     int temp; //临时变量用来交换a和b的值
//     temp = *p; //将a的值存储到temp中
//     *p = *q; //将b的值赋给a
//     *q = temp; //将temp的值赋给b
//     //这里使用指针用来传递函数，这样就可以在main函数中实现a和b的值交换
// }

// //这里需要注意的是，函数huhuan只是交换了a和b的值，但在main函数中调用huhuan时，a和b的值并没有被改变，因为C语言中的函数参数是按值传递的。
// // 如果想要在main函数中看到a和b的值被交换，需要使用指针来传递参 数。
// int main(void)
// {
//     int a = 3;
//     int b = 5;

//     huhuan(&a, &b); // 调用huhuan函数交换a和b的值 这个符号不一定要与函数里的符号相同，函数里用p、q，这个符号可以是任意的
//     printf("a = %d, b = %d\n", a, b); //输出交换后a和b的值

//     return 0; // 返回0，表示程序正常结束
// }


// //这样同样也换不了a、b的值
// #include <stdio.h>

// int a = 3;
// int b = 5;

// void huhuan(int a, int b)
// {
//     int t;
//     t = a;
//     a = b;
//     b = t;
// }

// int main(void)
// {
//     huhuan(a, b);
//     printf("a = %d, b = %d\n",a, b);

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int a = 3;
//     int b = 8;
//     int * p = &a; //定义指针指向a
//     int * q = &b; //定义指针指向b
//     int array[5];
//     p = &array[0];
//     q = &array[4];

//     // int * p = &a; //定义指针指向a
//     // int * q = &b; //定义指针指向b

//     printf("p和q指向的单元相隔%d个单元\n", q - p);

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     char ch = 'A';
//     int i = 999;
//     double x = 4343.33;
//     char *p = &ch;
//     int *q = &i;
//     double *r = &x;

//     printf("ch = %d, i = %d, x = %d\n", sizeof(p), sizeof(q), sizeof(r)); // 输出指针指向的值
//     printf("ch = %d, i = %d, x = %d\n", sizeof(char), sizeof(int), sizeof(double)); // 
//     printf("ch = %c, i = %d, x = %f\n", *p, *q, *r); // 输出指针指向的值

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int a[5];
//     int len;
//     int * pArr;
//     int i;

//     //动态构造一维数组
//     printf("请输入你要存放的元素的个数：");
//     scanf("%d", &len);
//     pArr = (int *)malloc(len * sizeof(int)); //动态的构造了一个一维数组, 该一维数组的长度是len，数组名是pArr。每个元素是int， 类似于int pArr[len];
    
//     //对数组进行赋值
//     for ( i = 0; i < len; i++)
//     {
//         scanf("%d", &pArr[i]);
//     }

//     //输出数组的值
//     printf("你输入的数组是：\n");
//     for ( i = 0; i < len; i++)
//     {
//         printf("%d ", pArr[i]);
//     }
    
//     return 0;
// }



// //互换数字复习
// #include <stdio.h>

// void exchange(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(void)
// {
//     int x = 122;
//     int y = 1233;
//     printf("交换前：x = %d, y = %d\n", x, y);
//     exchange(&x, &y);
//     printf("交换后：x = %d, y = %d\n", x, y);

//     return 0;
// } 



// //打印最长输入行
// #include <stdio.h>
// #define MAXLINE 1000

// int getline(char line[], int maxline);
// void copy(char to[], char from[]);

// int main(void)
// {
//     int len; // 当前行的长度
//     int max; // 最大行的长度
//     char line[MAXLINE]; // 存储当前行
//     char longest[MAXLINE]; // 存储最长的行

//     max = 0; // 初始化最大长度为0

//     while ((len = getline(line, MAXLINE)) > 0) // 读取每一行
//     {
//         if (len > max) // 如果当前行的长度大于最大长度
//         {
//             max = len; // 更新最大长度
//             copy(longest, line); // 复制当前行到最长行
//         }
//     }

//     if (max > 0) // 如果有输入
//         printf("最长的行是：%s", longest); // 输出最长的行

//     return 0; // 返回0，表示程序正常结束
// }

// int getline(char s[], int lim)
// {
//     int c, i;

//     for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//         s[i] = c; // 将字符存入数组
//     if (c == '\n') // 如果遇到换行符
//     {
//         s[i] = c; // 将换行符存入数组
//         ++i; // 增加长度
//     }
//     s[i] = '\0'; // 添加字符串结束符

//     return i; // 返回当前行的长度
// }

// void copy(char to[], char from[])
// {
//     int i;

//     i = 0;
//     while ((to[i] = from[i]) != '\0') // 逐个字符复制
//         ++i; // 增加索引
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     char a[10];
//     for ( i = 0; i < 10; i++)
//     {
//         printf("请输入第%d个字符： ", i + 1);
//         scanf(" %c",&a[i]);
//         getchar();//清除输入缓冲区的换行符
//     }

//     // printf("字符的值为：%c\n", a[0]); // 输出第一个字符
//     for ( i = 0; i < 10; i++)
//     {
//         printf("第%d个字符的值为：%c ", i+1, a[i]);
//     }
  
//     // printf("字符的值为： ", a);
//     // printf("\n请输入： ");
//     // printf("%c",getchar());
//     // printf("%c",getchar());
//     // printf("%c",getchar());
//     return 0;
// }


// //scanf和getchar的使用区别
// #include <stdio.h>
// #define SIZE 10

// int main() {
//     int i;
//     char a[SIZE];
    
//     printf("请输入%d个字符：\n", SIZE);
//     for(i = 0; i < SIZE; i++) {
//         printf("第%d个字符：", i+1);
//         if(scanf(" %c", &a[i]) != 1) { 
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
//         printf("%c ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }


// //数组的大小
// #include <stdio.h>

// int main(void)
// {
//     long long int arry[5] = {1111111111,33333333333,22222222,33333333,44444444};
//     printf("sizeof(arry) = %ld\n", sizeof(arry)); // 输出数组的大小
//     for (int i = 0; i < 5; i++)
//     {
//         printf("arry[%d] = %lld\n", i, arry[i]);
//     }
    

//     return 0;
// }

// //制表符占几个空格——8个
// #include<stdio.h>
// int main(){
// 	printf("123456781234567812345678\n");//line1
// 	printf("\ta\n");                     //line2
// 	printf("1234\ta\n");                 //line3
// 	printf("1234567\ta\n");              //line4
// 	printf("12345678\ta\n");             //line5
// 	printf("1234567812345\ta\n");        //line6
// 	printf("123456781234567\ta\n");      //line7
// 	printf("1234567812345678\ta\n");     //line8
// 	return 0;
// }

// // 输出乘法表
// #include <stdio.h>
// #define count 10

// int main(void)
// {  
//     for (int i = 1; i < count; i++)
//     {
//         for (int j = 1; j < i+1; j++)
//         {
//             printf("%d×%d=%d\t", j, i, i * j); // 输出乘法表的每一项
//         }
//         printf("\n"); // 每行结束后换行
//     }
    

//     return 0;
// }


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
    strcpy(pst -> name, "张三");
    st.sex = 'F';

    printf("%d %c %s", st.age, st.sex, st.name);
    
     
    return 0;
}