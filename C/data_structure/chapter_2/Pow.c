int IsEven(int num)     // 判断是否为偶数
{
    if (num % 2 == 0)
        return 1;
    return 0;
}

// 幂运算
long int Pow(long int X, unsigned int N)
{
    if (N == 0)
        return 1;
    if (N == 1)
        return X;       // 处理基准情形
    if (IsEven(N))      // 若为偶数，X^N = X^(N/2) · X^(N/2)
        return Pow(X * X, N / 2);
    else                // 若为奇数，X^N = X^((N-1)/2) · X^((N-1)/2)
        return Pow(X * X, N / 2) * X;
}
