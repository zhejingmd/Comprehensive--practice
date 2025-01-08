#include <iostream>
using namespace std;

/*
    输入一个年份，判断这一年是否是闰年，如果是输出1，否则输出0
*/

int main()
{
    int year; bool ans;
    cin >> year;
    ans = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    cout << ans << endl;
    return 0;
}