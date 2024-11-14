#include <stdio.h>


// 练习3-3，编写expand(s1, s2)，将字符串s1中类似a-z一类的速记符号在s2字符串中扩展为等价的完整列表

// void expand(char *s, char *t) {
//     int i = 0, j = 0;
//     while (s[i] != '\0') {
//         if (s[i] != '-' && s[i+1] != '-') {
//             t[j++] = s[i];
//         } else if (s[i] != '-' && s[i+1] == '-' && s[i+2] != '\0') {
//             char start = s[i];
//             char end = s[i+2];
//             for (char c = start; c <= end; c++) {
//                 t[j++] = c;
//             }
//             i += 2;
//         }
//         i++;
//     }
//     t[j] = '\0';
// }

// int main()
// {
//     char arr[100], brr[100];
//     char *p = "a-z", *t = "A-Z";
//     expand(p, arr);
//     expand(t, brr);
//     printf("%s\n", arr);     // >>> abc...xyz
//     printf("%s\n", brr);     // >>> ABC...XYZ
// }




// void reverse(char*);
// /* itoa: convert n to characters in s */
// void iota(int n, char *s)
// {
//     int i, sign;

//     if ((sign = n) < 0)
//         n = -n;
//     i = 0;
//     do
//     {
//         s[i++] = n % 10 + '0';
//     } while ((n /= 10) > 0);
//     if (sign < 0)
//         s[i++] = '-';
//     s[i] = '\0';
//     reverse(s);
// }

// void reverse(char *s) {
//     int len = 0;
//     while (s[len] != '\0') len++;
//     for (int i = 0; i < len / 2; i++) {
//         char temp = s[i];
//         s[i] = s[len - i - 1];
//         s[len - i - 1] = temp;
//     }
// }

// int main()
// {
//     int num = -123;
//     char arr[100];
//     iota(num, arr);
//     printf("%s\n", arr);    // >>> -123
// }



// 练习3-5，编写函数itob(n, s, b)，将整数n转换为b为底的数，并将结果以字符形式保存到s中
// 例如：itob(n, s, 16)，把整数n格式化成16进制整数保存到s中
// void itob(int n, char *s, int b)
// {
//     int i = 0, negative = 0;

//     // 考虑负数
//     if (n < 0)
//     {
//         negative = 1;
//         n = -n;
//     }

//     // 计算n的位数
//     do
//     {
//         int temp = n % b;
//         n /= b;
//         s[i++] = temp + (temp < 10 ? '0' : 'A' - 10);   // 将数字转换为字符
//     }
//     while (n > 0);

//     if (negative)
//     {
//         s[i++] = '-';
//     }

//     s[i] = '\0';

//     // 反转字符串
//     int start = 0, end = i -1;
//     while (start < end)
//     {
//         char temp = s[start];
//         s[start++] = s[end];
//         s[end--] = temp;
//     }
// }

// int main()
// {
//     char arr[10], brr[10];
//     itob(255, arr, 16);
//     itob(15, brr, 2);
//     printf("%s\n", arr);    // >>> FF
//     printf("%s\n", brr);    // >>> 1111
// }



// #include <string.h>
// /* trim: remove trailing blanks, tabs, newlines */
// // 删除字符串尾部的空格符、制表符、换行符
// int trim(char *s)
// {
//     int n;
//     for (n = strlen(s)-1; n >= 0; n--)
//     {
//         if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
//             break;
//     }
//     s[n+1] = '\0';  // 这时候n在hello的o处，所以要+1，将其后面设置为\0
//     return n;   // 返回删掉之后还剩下的索引
// }

// int main()
// {
//     char p[] = "hello        ";
//     printf("%d\n", trim(p));    // >>> 4
// }






// 第四章 函数与程序结构







// 在文本行中寻找包含字符串"ould"的行
// #define MAXLINE 1000    // 最大输入长度

// int getline(char *line, int max);
// int strindex(char *source, char *searchfor);

// char pattern[] = "ould";    // 要搜索的模式

// // 查找所有与模式匹配的行
// int main()
// {
//     char line[MAXLINE];
//     int found = 0;

//     while (getline(line, MAXLINE) > 0)
//     {
//         if (strindex(line, pattern) >= 0)
//         {
//             printf("%s", line);
//             found++;
//         }
//     }
//     return found;
// }

// // 将行内容读取到字符串s中，并返回其长度
// int getline(char *s, int lim)
// {
//     int c, i = 0;

//     while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//     {
//         s[i++] = c;
//     }
//     // 如果是因为达到lim限制而停止读取，不添加换行符
//     if (c == '\n' && i < lim) {
//         s[i++] = c;
//     }
//     s[i] = '\0';
//     return i;
// }

// // 返回字符串t在字符串s中的索引位置，如果没有找到则返回-1
// int strindex(char *s, char *t)
// {
//     int i, j, k;
//     if (t[0] == '\0') return 0; // 如果模式为空，返回0
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//             if (s[j] == '\0') return -1; // 如果s结束了，但t还没结束，返回-1
//         if (k > 0 && t[k] == '\0')
//             return i;
//     }
//     return -1;
// }



// #include <string.h> 
// // 练习4-1，strindex(s, t)，它返回字符串t在s中最右边出现的位置。如果s中不包含t，返回-1
// int strindex(char *s, char *t)
// {
//     int len_s = strlen(s);
//     int len_t = strlen(t);

//     // 如果t比s长，显然没有匹配
//     if (len_t > len_s) {
//         return -1;
//     }

//     // 从s的末尾开始查找
//     for (int i = len_s - len_t; i >= 0; i--) {
//         int j = 0;
//         // 比较s[i]到s[i+len_t-1]是否等于t
//         while (j < len_t && s[i + j] == t[j]) {
//             j++;
//         }

//         // 如果成功匹配全部
//         if (j == len_t) {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     char *s = "hello,world";
//     char *t = "or";
//     char *f = "qe";
//     printf("%d\n", strindex(s, t));     // >>> 7
//     printf("%d\n", strindex(s, f));     // >>> -1
// }




















// 4.3章 待续.....


