#include <stdio.h>

// 求最大公约数
// 欧几里得算法（辗转相除法）
int Euclidean_Algorithm(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main()
{
    printf("%d\n", Euclidean_Algorithm(1997, 615));     // >>> 1
}