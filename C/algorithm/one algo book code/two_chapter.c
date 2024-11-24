#include <stdio.h>
#include <string.h>

// 第二章  排序

// example 1
// 冒泡排序
void Bubble_sort(int *s, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

// int main()
// {
//     int arr[] = {5, 63, 23, 643, 6};
//     Bubble_sort(arr, 5);
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);  // >>> 5 6 23 63 643
// }


// example 2
// 选择排序
void choice_sort(int *s, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)
        {
            if (s[min] > s[j])
                min = j;
        }
        if (min != i)
        {
            int temp = s[i];
            s[i] = s[min];
            s[min] = temp;
        }
    }
}

// int main()
// {
//     int arr[] = {6, 32, 623, 23, 62};
//     choice_sort(arr, 5);
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);      // >>> 6 23 32 62 623
// }
