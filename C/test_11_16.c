#include <stdio.h>

// 4.11.2 宏 替换
/*
    宏定义如下：
    #define 名字 被替换的文本

    宏在使用的时候，是在预处理阶段进行文本替换
*/

// 按照规范， 宏 名称必须全部大写
// Example 1
// #define M 20
// int main()
// {
//     printf("%d\n", M);      // >>> 20
//     printf("%d\n", M*M);    // >>> 400
// }

// 宏，也能定义常量字符串，常用来表示路径
// Example 2
// #define PATH "C:\\Users\\test\\Desktop"
// int main()
// {
//     printf("%s\n", PATH);   // >>> C:\Users\test\Desktop
// }

// 宏 定义简单表达式
// Example 3
// #define SUM(x) x + x
// int main()
// {
//     printf("%d\n", SUM(10));    // >>> 20
//     // 预处理的结果如下，宏的使用永远是文本替换
//     // printf("%d\n", 10 + 10);
// }

// 宏 定义复杂表达式
// Example 4
// do-while-zero 结构
// #define INIT_VALUES(a, b) \
// do{\
// a = 0;\
// b = 0;\
// } while (0)

// int main()
// {
//     int a = 100, b = 200;
//     printf("before: a = %d, b = %d\n", a, b);
//     INIT_VALUES(a, b);
//     printf("after: a = %d, b = %d\n", a, b);
// }

// 宏的范围，是从开始到 #undef 之间都有效果， undef 即 取消宏的定义

// 条件预处理
// ifdef ，若 定义 宏CPP， 执行ifdef - endif 之间的代码
// ifndef ，即 if not def，与之相反
// 只关注宏是否有定义，0值、空值仍然可以，ifdef后面只能跟名称，不可跟表达式
// #define CPP
// int main()
// {
//     #ifdef CPP
//         printf("CPP\n");
//     #endif
// }

// #if #elif #else #endif
// 判断表达式的真假
// #define CPP 0
// int main()
// {
//     #if CPP     // 定义为0，故为假
//         printf("CPP\n");
//     #else
//         printf("NO CPP\n");
//     #endif
// }

// 第五章 指针与数组

// 如何声明指针、使用运算符&和*
// int main()
// {
//     int x = 1, y = 2, z[10];
//     int *ip;    // ip 是一个指向 int 类型的指针
//     ip = &x;    // ip 现在指向了 x
//     y = *ip;    // y 现在是 1
//     *ip = 0;    // x 现在是 0
//     ip = &z[0]; // ip 现在指向了 z[0]
// }

// 指针与函数参数
// void swap(int *px, int *py)
// {
//     int temp = *px;
//     *px = *py;
//     *py = temp;
// }
// int main()
// {
//     int a = 10, b = 20;
//     swap(&a, &b);
//     printf("a=%d b=%d", a, b);
// }

// strlen的另一个版本
// int my_strlen(char *s)
// {
//     int n;
//     for (n = 0; *s != '\0'; s++)
//         n++;
//     return n;
// }

// int main()
// {
//     char *p = "hello";
//     printf("%d\n", my_strlen(p));   // >>> 5
// }

// strlen的一种版本
// int my_strlen(char *s)
// {
//     char *p = s;
//     while(*p != '\0')
//         p++;
//     return p - s;
// }

// int main()
// {
//     char *p = "hello";
//     printf("%d\n", my_strlen(p));   // >>> 5
// }

// 字符数组和字符指针，两者有很大的区别
/*
    char amessage[] = "nw is the time";
    仅仅足以存放初始化字符串以及'\0'的一维数组，单个字符可以被修改，但amessage始终指向同一个存储位置

    char *pmessage = "now is the time";
    指针，指向一个字符串常量。pmessage可以指向其他地址，但无法修改字符串的内容
*/

// strcpy函数（优化版）
// 将字符串 t 复制到 s 中
// void my_strcpy(char *s, char *t)
// {
//     while (*s++ = *t++)
//         ;
// }

// int main()
// {
//     char *s = "hello";
//     char *p;
//     my_strcpy(p, s);
//     printf("%s\n", p);  // >>> hello
// }

// 练习5-3 用指针方式实现 strcat(s, t)，将t指向的字符串复制到s所指向的字符串尾部
// void my_strcat(char *s, char *t)
// {
//     // 找到 s 的末尾
//     while (*s)
//         s++;
//     // 循环复制完t
//     while (*s++ = *t++)
//         ;
// }

// int main()
// {
//     char s[] = "hello";
//     char *t = " world";
//     my_strcat(s, t);
//     printf("%s\n", s);  // >>> hello world
// }

// 练习5-4，strend(s, t)，如果字符串t出现在字符串s的尾部，返回1，否则返回0
// int strend(char *s, char *t)
// {
//     while (*s)
//         s++;
//     while (*t)
//         t++;
//
//     while (*s-- == *t--)
//         if (*t == '\0')
//             return 1;
//     return 0;
// }

// int main()
// {
//     char q[] = "hello world";
//     char *x = "ld";
//     char *y = "wo";
//     printf("%d\n", strend(q, x));   // >>> 1
//     printf("%d\n", strend(q, y));   // >>> 0
// }

// 练习5-5，实现库函数strncpy、strncat、strncmp，他们最多对参数字符串中的前n个字符进行操作
// 例如：strncpy(s, t, n) 将 t 中的前n个字符复制到 s 中
// void my_strncpy(char *s, char *t, int n)
// {   // 将 t 的前 n 个字符复制到 s
//     while (n--)
//     {
//         *s++ = *t++;
//     }
//     *s = '\0';
// }

// void my_strncat(char *s, char *t, int n)
// {   // 将 t 的字符串复制到 s 的尾部
//     while (*s)
//         s++;

//     while (n--)
//         *s++ = *t++;

//     *s = '\0';
// }

// int my_strncmp(char *s, char *t, int n)
// {   // 比较 s 和 t 指向的字符串，最多比较 n 个字符
//     // s < t  -
//     // s > t +
//     // s = t 0
//     while (n--)
//     {
//         if (*s == '\0' || *t == '\0')
//             break;

//         if (*s != *t)
//             return *s - *t;
//         s++;
//         t++;
//     }
//     return 0;
// }

// int main()
// {
//     int n = 4;

//     // strncpy
//     char qq[] = "";
//     char *x = "hello,world";
//     my_strncpy(qq, x, n);
//     printf("%s\n", qq);      // >>> hell

//     // strncat
//     char ll[] = "hello";
//     char *y = ",world";
//     my_strncat(ll, y, n);
//     printf("%s\n", ll);     // >>> hello,wor

//     // strncmp
//     char hh[] = "hello";
//     char *z = "hallo,world";
//     char *b = "helzz,world";
//     printf("%d, %d\n", my_strncmp(hh, z, n), my_strncmp(hh, b, n));   // hh > z +   // hh < b -
// }




// 多维数组



/*
    快速计算日期
*/
// static char daytab[2][13] = {
//     {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
//     {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
// // 通过年、月、日份来确定这一年的第几天
// int day_of_year(int year, int month, int day)
// {
//     if (month < 1 || month > 12 || day < 1 || day > 31)
//     {
//         return -1; // 非法月份或日期
//     }
//     int i, leap;
//     leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//     if (month == 2 && day == 29 && !leap)
//     {
//         return -1; // 非闰年的2月29日
//     }
//     for (i = 1; i < month; i++)
//     {
//         day += daytab[leap][i];
//     }
//     return day;
// }

// // 给定哪年的第几天，计算出为哪个月份和日期
// void month_day(int year, int yearday, int *pmonth, int *pday)
// {
//     if (yearday < 1 || yearday > 366)
//     {
//         *pmonth = *pday = -1; // 非法天数
//         return;
//     }
//     int i, leap;
//     leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//     for (i = 1; yearday > daytab[leap][i]; i++)
//     {
//         yearday -= daytab[leap][i];
//     }
//     *pmonth = i;
//     *pday = yearday;
// }

// int main()
// {
//     int year = 2024;
//     int month = 2;
//     int day = 29;
//     printf("%d\n", day_of_year(year, month, day)); // >>> 60
//     int x, y, n = 60;
//     month_day(year, n, &x, &y);
//     printf("%d年的第%d天是 %d月 %d日\n", year, n, x, y); // >>> 2024年的第60天是 2月 29日
// }



// 练习5-9， 用指针方式改写上面两个函数

// // Example
// int main()
// {
//     int *a[2];
//     int m[] = {8, 22, 11};
//     int n[] = {11, 44, 21, 54};
//     a[0] = m;
//     a[1] = n;
//     printf("a[1]: %d\n", a[1][1]);
//     printf("a[2]: %d\n", a[1][2]);
// }


// static char daytab[2][13] = {
//     {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
//     {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

// int day_of_year(int year, int month, int day);
// void month_day(int year, int yearday, int *pmonth, int *pday);

// int main()
// {
//     int year = 2024;
//     int month = 2;
//     int day = 29;
//     printf("%d\n", day_of_year(year, month, day)); // >>> 60
//     int x, y, n = 60;
//     month_day(year, n, &x, &y);
//     printf("%d年的第%d天是 %d月 %d日\n", year, n, x, y); // >>> 2024年的第60天是 2月 29日
// }

// int day_of_year(int year, int month, int day)
// {
//     if (month < 1 || month > 12 || day < 1 || day > 31)
//         return -1;

//     int i, leap;

//     leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0; // 闰年1，非闰年0
//     if (month == 2 && day == 29 && !leap)
//         return -1;

//     char *days = daytab[leap];
//     for (i = 1; i < month; i++)
//         day += *(days + i);
//     return day;
// }

// void month_day(int year, int yearday, int *pmonth, int *pday)
// {
//     int i, leap;
//     leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0; // 闰年1，非闰年0
//     char *days = daytab[leap];
//     for (i = 1; yearday > *(days + i); i++)
//         yearday -= *(days + i);
//     *pmonth = i;
//     *pday = yearday;
// }


