// 欧几里德算法（计算最大公因数）
unsigned int Gcd(unsigned int M, unsigned int N)
{   // 同时整除二者的最大整数
    unsigned int Rem;

    while (N > 0)
    {
        Rem = M % N;    // 记录余数
        M = N;          // 取除数为被除数
        N = Rem;        // 取余数为除数
    }
    return M;
}