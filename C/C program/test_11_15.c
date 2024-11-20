#include <stdio.h>

// 4.3


// 后缀表达式 计算器 （逆波兰计算器）




// 4.7 寄存器变量
/*
    register 声明告诉寄存器，它所声明的变量在程序中使用频率较高，存放到寄存器中
    可以使程序更小、执行速度更快
    声明如下：
    register int x;
*/



// 函数递归

// 以十进制打印n
// void printd(int n)
// {
//     if (n < 0)
//     {
//         putchar('-');
//         n = -n;
//     }
//     if (n / 10)
//     {
//         printd(n / 10);
//     }
//     putchar(n % 10 + '0');
// }

// int main()
// {
//     printd(125);     // >>> 125
// }



// 快速排序(递归)，将v[left]…v[right] 中的元素按升序排列
// void qsort(int *v, int left, int right)
// {
//     int i, last;
//     void swap(int *v, int i, int j);
//     if (left >= right)
//         return;
//     swap(v, left, (left + right) / 2);
//     last = left;
//     for (i = left + 1; i <= right; i++)
//     {
//         if (v[i] < v[left])
//             swap(v, ++last, i);
//     }
//     swap(v, left, last);
//     qsort(v, left, last - 1);
//     qsort(v, last + 1, right);
// }

// void swap(int *v, int i, int j)
// {
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
// }

// int main()
// {
//     int arr[] = { 14, 257, 189, 35, 222, 25};
//     qsort(arr, 0, 5);
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);      // >>> 14 25 35 189 222 257
//     }
// }

