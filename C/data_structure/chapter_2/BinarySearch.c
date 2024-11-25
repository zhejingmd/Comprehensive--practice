#define ElementType int
#define NotFound -1

// 二分查找
int BinarySearch(const ElementType *A, ElementType X, int N)
{
    int low, high, mid;
    low = 0, high = N - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (A[mid] < X)
            low = mid + 1;
        else
        if (A[mid] > X)
            high = mid - 1;
        else
            return mid;
        /*  下面是实现，每次迭代只有一个二路比较
        else
        {
            if (A[mid] == X)
                return mid;
            else
                high = mid - 1;
        }
        */
    }
    return NotFound;
}