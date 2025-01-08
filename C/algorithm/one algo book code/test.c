#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

// Ŀǰ��9Ԫ��5Ԫ��2Ԫ������ֵ��Ӳ������ö������Ҫ�һ�21Ԫ��Ӳ�ң�����ʲô������Ͽ���ʹ�һ�Ӳ����������
// int coin(int n, int count, int *wight, int *values)
// {
//     int i, j;

//     int dp[n+1][count+1];

//     for (i = 0; i <= n; i++)
//     {
//         for (j = 0; j <= count; j++)
//             dp[i][j] = 0;
//     }

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= count; j++)
//         {
//             if (j < wight[i-1])
//                 dp[i][j] = dp[i-1][j];
//             else
//                 dp[i][j] 
//         }
//     }
// }


int one_zero(int n, int capacity, int *wight, int *values)
{
    int i, j;
    // dp[i][j] ��ʾ��ǰi����Ʒ��ѡ�񣬷�������Ϊj�ı������ܵõ�������ֵ
    int dp[n+1][capacity+1];

    // ��ʼ��
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= capacity; j++)
            dp[i][j] = 0;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= capacity; j++)
        {
            if (j < wight[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-wight[i-1]] + values[i-1]);
        }
    }

    return dp[n][capacity];
}

// int main()
// {
//     int n = 4, capacity = 8;
//     int arr[] = {2, 3, 4, 5};    // ����
//     int brr[] = {3, 4, 5, 8};    // ��ֵ
//     printf("Max values: %d\n", one_zero(n, capacity, arr, brr));
// }




// void main()
// {
//     char str[20];
//     int i, num[256] = {0};
//     printf("�����ַ���:\n");
//     scanf("%s", str);

//     for (i = 0; i < strlen(str); i++)
//         num[(int)str[i]]++;

//     for (i = 0; i < 256; i++)
//         if (num[i] != 0)
//             printf("%c : %d\n", (char)i, num[i]);
// }

// #include <stdio.h>

// int getway(int n)
// {
//     int i;
//     if (n == 1 || n == 2)
//         return n;
    
//     int dp[n + 1];
//     for (i = 0; i <= n; i++)
//         dp[i] = 0;
    
//     dp[1] = 1;
//     dp[2] = 2;

//     for (i = 3; i <= n; i++)
//         dp[i] = dp[i - 1] + dp[i - 2];

//     return dp[n];
// }

// int main()
// {
//     printf("%d\n", getway(20));
// }