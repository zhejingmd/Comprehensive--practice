// 最大子列和
int MaxSubsequenceSum(const int *A, int N)
{
    int this_sum, max_sum, i;

    this_sum = max_sum = 0;

    for (i = 0; i < N; i++)
    {
        this_sum += A[i];

        if (this_sum > max_sum)
            max_sum = this_sum;
        else if (this_sum < 0)
            this_sum = 0;
    }
    return max_sum;
}