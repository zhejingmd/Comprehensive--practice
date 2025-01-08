#include <iostream>
using namespace std;

/*
    P5716
    输入年份和月份，输出这一年的这一月有多少天。需要考虑闰年
*/

int main()
{
    int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month;
    cin >> year >> month;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // 修复了闰年判断条件
        arr[2] = 29;
    
    cout << arr[month];
    return 0;
}