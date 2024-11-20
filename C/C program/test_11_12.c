#include <stdio.h>


// 将一段数字字符串转换为整数

// int atoi(char s[])
// {
//     int i, n;
//     n = 0;
//     for (i=0; s[i] >= '0' && s[i] <='9'; ++i)
//     {
//         n = 10*n + (s[i] - '0');
//     }
//     return n;
// }

// int main()
// {
//     char s[] = {"1111"};
//     printf("%d\n", atoi(s));
// }


// 将大写字母转换为小写字母的ASCLL码值

// int lower(int c)
// {
//     if (c >= 'A' && c <= 'Z')
//         return c + 'a' - 'A';
//     else
//         return c;
// }

// int main()
// {
//     printf("%d\n", lower(67));
// }


// 练习2-3
// 编写函数htoi(s)，把由十六进制数字组成的字符串（包含可选的前缀0x）
// 转换为与之等价的整型值。字符串中允许出现0-9，a-f，A-F

// #include <string.h>
// int htoi(const char *s)
// {
//     int result = 0;     // 结果
//     int len = strlen(s);

//     // 跳过前缀
//     if (s[0] == '0' && s[1] == 'x' || s[1] == 'X')
//     {
//         s += 2;
//         len -= 2;
//     }

//     // 遍历字符串中每个字符
//     for (int i = 0; s[i] != '\0'; ++i)
//     {
//         char c = s[i];
//         int value;

//         if (c >= '0' && c <= '9')
//             value = c - '0';
//         else if (c >= 'A' && c <= 'F')
//             value = c - 'A' + 10;
//         else if (c >= 'a' && c <= 'f')
//             value = c - 'a' + 10;
//         else
//             return 0;
        
//         result = result * 16 + value;
//     }
//     return result;
// }

// int main()
// {
//     printf("%d\n", htoi("0xff"));
// }
