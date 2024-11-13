#include <stdio.h>

// // 删除字符串s中出现的所有字符c
// void squeeze(char *s, char c)
// {
//     int i, j;

//     for (i = j = 0; s[i] != '\0'; i++)
//     {
//         if (s[i] != c)
//         {
//             s[j++] = s[i];
//         }
//     }
//     s[j] = '\0';
// }

// int main()
// {
//     char arr[] = "aabbccddee";
//     squeeze(arr, 'a');
//     printf("%s\n", arr);    // 输出bbccddee
// }


// 重写标准库函数strcat
// void my_strcat(char *s, char *t)
// {
//     int i = 0, j = 0;

//     while (s[i] != '\0')
//     {
//         i++;
//     }
//     while ((s[i++] = t[j++]) != '\0')   // 使用后缀运算符++，保证循环过程中, i和j均指向下一个位置
//     {
//         ;
//     }
// }

// int main()
// {
//     char arr[] = "abc";
//     char brr[] = ",hello";
//     my_strcat(arr, brr);
//     printf("%s\n", arr);    // >>> abc,hello
// }


// 练习2-4 squeeze(s1, s2), 将字符串s1中任何与字符串s2中匹配的字符都删除
// void squeeze(char *s, char *c)
// {
//     int i, j, flag;
//     int k = 0;  // 记录s中不需要删除的位置
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         flag = 0;
//         for (j = 0; c[j] != '\0'; j++)
//         {
//             if (s[i] == c[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (!flag)  // 如果不需要删除，将其复制到s的k位置
//         {
//             s[k++] = s[i];
//         }
//     }
//     s[k] = '\0';    // 确保字符串以'\0'结尾
// }

// int main()
// {
//     char p[] = "hello, world";
//     char test[] = "lo";
//     squeeze(p, test);
//     printf("%s\n", p);  // >>> he, wrd
// }



/*
    练习2-5，编写函数any(s1, s2)，将字符串s2中的任一字符在字符串s1中第一次出现的位置作为结果返回。
    如果s1中不包含s2中的字符，则返回-1。
    （标准库函数strpbrk具有相同功能，但它返回的是指向该位置的指针）
*/ 
// int any(char *s, char *c)
// {
//     int i, j;
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         for (j = 0; c[j] != '\0'; j++)
//         {
//             if (s[i] == c[j])
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     char arr[] = "hello, world";
//     char brr[] = "lo";
//     printf("%d\n", any(arr, brr));  // >>> 2
// }





// 3. 控制流



// 折半查找（二分查找）,判定已排序数组v中是否存在特定值x
// int binsearch(int x, int *v, int n)
// {
//     int low, high, mid;
//     low = 0, high = n - 1;

//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (x < v[mid])
//             high = mid - 1;
//         else if (x > v[mid])
//             low = mid + 1;
//         else
//             return mid;
//     }
//     return -1;  // 返回-1，没有找到
// }

// int main()
// {
//     int arr[] = { 6, 12, 23, 56, 78, 123, 222};
//     int len = 7;  // 数组的长度
//     int target = 123;
//     printf("%d\n", binsearch(target, arr, len));    // >>> 5
// }



/*
练习 3-1
在上面有关折半查找的例子中，while循环语句内共执行了两次测试，其实只要一次就足够
(代价是将更多的测试在循环外执行)。重写该函数，使得在循环内部只执行一次测试。
*/
// int binsearch(int x, int *v, int n) {
//     int low, high, mid;
//     low = 0, high = n - 1;

//     while (low <= high && x != v[mid]) {
//         mid = (low + high) / 2;
//         if (x > v[mid]) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     if (x == v[mid])
//         return mid;
//     else
//         return -1;
// }

// int main()
// {
//     int arr[] = { 6, 12, 23, 56, 78, 123, 222 };
//     int len = 7;  // 数组的长度
//     int target = 123;
//     printf("%d\n", binsearch(target, arr, len));
// }



// 练习3-2，esacpe(s, t),将字符串t复制到s中，并将换行符、制表符转换为\n,\t，然后再写一个相反功能的函数
// void escape(char *s, char *t)
// {
//     while (*t)
//     {
//         if (*t == '\n')
//         {
//             *s++ = '\\';
//             *s++ = 'n';
//         }
//         else if (*t == '\t')
//         {
//             *s++ = '\\';
//             *s++ = 't';
//         }
//         else
//         {
//             *s++ = *t;
//         }
//         t++;
//     }
//     *s = '\0';
// }

// void reverse_escape(char *s, char *t)
// {
//     while(*t)
//     {
//         if (*t == '\\' && *(t+1) == 'n')
//         {
//             *s++ = '\n';
//             t++;
//         }
//         else if (*t == '\\' && *(t+1) == 't')
//         {
//             *s++ = '\t';
//             t++;
//         }
//         else
//         {
//             *s++ = *t;
//         }
//         t++;
//     }
//     *s = '\0';
// }

// int main()
// {
//     char arr[100], brr[100];
//     char *p = "hello\n,\tworld";
//     escape(arr, p);
//     printf("原来的字符串：\n%s\n", p);
//     printf("修改后字符串：%s\n", arr);
//     reverse_escape(brr, arr);
//     printf("转换后字符串：%s\n", brr);
// }



// 重构将一段数字字符串转换为对应数值的函数atoi，实现还可以处理前导空白符以及一个可选的+-号
// #include <ctype.h>
// int atoi(char *s)
// {
//     int i = 0, n = 0, sign = 1;

//     while (isspace(s[i]))    // 跳过前导空白符
//     {
//         i++;
//     }
    
//     if (s[i] == '+' || s[i] == '-')
//     {
//         sign = (s[i] == '-') ? -1 : 1;
//         i++;
//     }

//     while (isdigit(s[i]))
//     {
//         n = n * 10 + (s[i] - '0');
//         i++;
//     }

//     return sign * n;
// }

// int main()
// {
//     char *p = "  -123";
//     printf("%d\n", atoi(p));    // >>> -123
// }



// 希尔排序
void shellsort(int *v, int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
}
#include <string.h>
int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    shellsort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}